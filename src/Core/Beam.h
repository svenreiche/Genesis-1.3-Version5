//
// Created by reiche on 12.10.21.
//

// basic class to organize the memory management of the particle distribution.
// tracking and diagnostics are applied by external classes

#ifndef GENESIS_1_3_VERSION5_BEAM_H
#define GENESIS_1_3_VERSION5_BEAM_H

#include <vector>
#include "Particle.h"

template<class T>
class Beam {
    public:
        std::vector< std::vector< Particle<T> > > beam;
        bool init(unsigned int);
        void initSlice(unsigned int, const std::vector<Particle<T>>&);
        void clear();
};



#endif //GENESIS_1_3_VERSION5_BEAM_H
