"""Reproduce the mechanical inventories and matching maps from the supplied exports."""
from pathlib import Path
import argparse, os, subprocess, sys

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--input-dir', type=Path, required=True, help='Folder containing the three XML/bytes pairs')
    parser.add_argument('--output-dir', type=Path, required=True, help='New directory for generated analysis and tables')
    parser.add_argument('--include-doa1', action='store_true', help='Also index a supplied 1996 XML/bytes pair')
    args = parser.parse_args()
    source = Path(__file__).resolve().parent
    destination = args.output_dir.resolve()
    cache = destination / 'analysis' / 'builds.pkl'
    if cache.exists():
        parser.error('Output contains a cached build analysis. Choose a fresh output directory to avoid stale results.')
    (destination / 'analysis').mkdir(parents=True, exist_ok=True)
    (destination / 'deliverables').mkdir(exist_ok=True)
    index = destination / 'analysis' / 'inputs.json'
    env = dict(os.environ, DOA5_INPUT_INDEX=str(index), PYTHONHASHSEED='0')
    command = [sys.executable, str(source / 'build_inputs.py'), str(args.input_dir.resolve()), str(index)]
    if args.include_doa1:
        command.append('--include-doa1')
    subprocess.run(command, check=True, cwd=destination, env=env)
    for script in ('match.py', 'export_evidence.py'):
        subprocess.run([sys.executable, str(source / script)], check=True, cwd=destination, env=env)
    print('Generated tables:', destination / 'deliverables')

if __name__ == '__main__':
    main()
