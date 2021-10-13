#include <iostream>

#include "src/Core/Beam.h"

int main() {
    Beam<double> b;
    unsigned int nslice=4000;
    b.init(nslice);


    // create some dummy beam
    unsigned int nsize = 4000;
    std::vector<Particle<double>> slice;
    Particle<double> p;
    for (unsigned int i=0; i < nsize; i++){
        slice.push_back(p);
    }

    for (unsigned int i = 0; i < nslice; i++) {
            b.initSlice(i, slice);
    }

    std::cout << "Allocation done. Size: " << b.beam.size() << "\n";


    b.clear();
    std::cout << "Allocation done. Size: " << b.beam.size() << "\n";
}
