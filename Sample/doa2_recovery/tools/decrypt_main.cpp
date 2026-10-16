// license:BSD-3-Clause
// DOA2 boot-loader block runner. See sega315_5881.cpp for cipher credits.
#include "sega315_5881.cpp"
#include <iomanip>

static uint32_t le32(const std::vector<uint8_t>& v, size_t p) {
    if (p+4 > v.size()) throw std::runtime_error("Unexpected end of ROM");
    return uint32_t(v[p]) | (uint32_t(v[p+1])<<8) |
        (uint32_t(v[p+2])<<16) | (uint32_t(v[p+3])<<24);
}

int main(int argc, char** argv) {
    try {
        if (argc!=3) throw std::runtime_error("Usage: decrypt_main IC22_ROM OUTPUT_BIN");
        std::ifstream in(argv[1],std::ios::binary);
        if (!in) throw std::runtime_error("Cannot open input");
        std::vector<uint8_t> rom((std::istreambuf_iterator<char>(in)),{});
        if (rom.size()!=0x400000 || std::memcmp(rom.data(),"NAOMI",5))
            throw std::runtime_error("Expected an original 4 MiB DOA2 IC22 ROM");
        const uint32_t boot=le32(rom,0x360);
        if (boot+0x12e02>rom.size() || le32(rom,boot)!=0x2fd62fe6)
            throw std::runtime_error("Unrecognized boot-loader layout");
        std::vector<uint8_t> output;
        uint32_t expected_source=0x500;
        for (unsigned b=0;b<16;b++) {
            const size_t row=boot+0x10460+b*16;
            const uint32_t stored=le32(rom,row), src=le32(rom,row+4);
            const uint32_t size=le32(rom,row+8), subkey=le32(rom,row+12);
            if (src!=expected_source || stored<4 || src+stored>boot ||
                size>0x20000 || size==0 || (size&1) || subkey>0xffff)
                throw std::runtime_error("Invalid boot-loader block table");
            expected_source=src+stored;
            sega_315_5881_crypt_device crypt;
            crypt.m_read=[&rom](uint32_t a) {
                size_t p=size_t(a)*2;
                if (p+1>=rom.size()) throw std::runtime_error("Cipher read outside ROM");
                return uint16_t((rom[p]<<8)|rom[p+1]);
            };
            crypt.set_addr_low((src/2)&0xffff);
            crypt.set_addr_high((src/2)>>16);
            crypt.set_subkey(subkey);
            for (uint32_t i=0;i<size;i+=2) {
                uint8_t* data;
                crypt.do_decrypt(data);
                // Match boot-loader byte stores through the NAOMI word port.
                output.push_back(data[1]);
                output.push_back(data[0]);
            }
            std::cout<<"Block "<<b<<" ROM 0x"<<std::hex<<src
                <<" -> RAM 0x"<<(0x0c020000+output.size()-size)
                <<" size 0x"<<size<<std::dec<<"\n";
        }
        if (expected_source>boot || boot-expected_source>31)
            throw std::runtime_error("Unexpected gap before boot loader");
        std::ofstream out(argv[2],std::ios::binary);
        out.write(reinterpret_cast<const char*>(output.data()),output.size());
        if (!out) throw std::runtime_error("Cannot write output");
        std::cout<<"Wrote "<<output.size()<<" bytes; load at 0x0C020000 (SH-4 little endian).\n";
    } catch (const std::exception& e) {
        std::cerr<<"Error: "<<e.what()<<"\n"; return 1;
    }
}
