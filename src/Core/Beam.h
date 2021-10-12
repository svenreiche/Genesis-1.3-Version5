//
// Created by reiche on 12.10.21.
//

// basic class to organize the memory management of the particle distribution.
// tracking and diagnostics are applied by external classes

#ifndef GENESIS_1_3_VERSION5_BEAM_H
#define GENESIS_1_3_VERSION5_BEAM_H

#include <vector>
#include "Particle.h"

class Beam {
    public:
        std::vector< std::vector< Particle<double> > > beam;
        Beam(){};
        ~Beam(){};
        bool init(unsigned int);
        void clear() {beam.resize(0);};
};



#endif //GENESIS_1_3_VERSION5_BEAM_H
