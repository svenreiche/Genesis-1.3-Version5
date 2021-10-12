//
// Created by reiche on 12.10.21.
//

#ifndef GENESIS_1_3_VERSION5_PARTICLE_H
#define GENESIS_1_3_VERSION5_PARTICLE_H

template<typename T>   // template to optimize memory consumption (either float or double)
struct Particle{
    T gamma = 1;        // energy in units of mc^2
    T theta = 0;        // longitudinal position in units in units of 2 pi /lambda_ref
    T x = 0;            // transverse position in x in units of m
    T y = 0;            // transverse position in y in units of m
    T px = 0;           // transverse momentum in x in units of mc
    T py= 0;           // transverse momentum in y in units of mc
};
#endif //GENESIS_1_3_VERSION5_PARTICLE_H
