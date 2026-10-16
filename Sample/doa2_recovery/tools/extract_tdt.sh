#!/usr/bin/env bash
# Reproduce extraction using only Bash and GNU coreutils (dd, stat, mkdir).
# Usage: bash extract_tdt.sh ROM TABLE.tdt OUTPUT_DIRECTORY
set -euo pipefail
rom=${1:?ROM file required}
table=${2:?TDT file required}
out=${3:?Output directory required}
total=$(stat -c %s -- "$rom")
mkdir -p -- "$out"
written=0
skipped=0
declare -A seen=()
while IFS=$'\t' read -r address length name rest || [[ -n ${address:-} ]]; do
    address=${address%$'\r'}
    length=${length%$'\r'}
    name=${name%$'\r'}
    [[ -z $address ]] && continue
    [[ $address =~ ^[[:xdigit:]]+$ && $length =~ ^[0-9]+$ ]] || {
        echo "Invalid table row: $address $length" >&2; exit 1;
    }
    [[ -n $name && $name != */* && $name != *\\* && $name != . && $name != .. ]] || {
        echo "Invalid output filename" >&2; exit 1;
    }
    offset=$((16#$address))
    count=$((10#$length))
    if [[ -n ${seen[$name]:-} ]]; then
        name="${name}_at_${address}"
    fi
    seen[$name]=1
    if (( offset+count > total )); then
        skipped=$((skipped+1))
        continue
    fi
    dd if="$rom" of="$out/$name" iflag=skip_bytes,count_bytes \
       skip="$offset" count="$count" status=none
    written=$((written+1))
done < "$table"
echo "Extracted $written files; skipped $skipped entries outside supplied ROM."
