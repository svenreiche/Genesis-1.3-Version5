#include <iostream>

#include "src/Core/Beam.h"

int main() {
    Beam b;
    b.init(10);
    std::cout << "Allocation done. Size: " << b.beam.size() << "\n";
    b.clear();
    std::cout << "Allocation done. Size: " << b.beam.size() << "\n";
}
