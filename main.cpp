#include <iostream>

#include "src/Core/Particle.h"

int main() {
    Particle<double> p;
    p.gamma=2;
    Particle<double> pp = p;
    std::cout << pp.gamma << " " << pp.theta << std::endl;
    return 0;
}
