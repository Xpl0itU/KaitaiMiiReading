#include <fstream>
#include <iostream>
#include "kaitai/kaitaistream.h"
#include "gen2_wiiu_3ds_miitomo.h"

int main() {
    std::ifstream is("mii01miiverse01.ffsd", std::ifstream::binary);
    kaitai::kstream ks(&is);
    gen2_wiiu_3ds_miitomo_t data(&ks);
    printf("%ls", data.mii_name().c_str());
}