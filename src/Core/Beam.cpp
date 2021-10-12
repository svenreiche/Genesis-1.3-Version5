//
// Created by reiche on 12.10.21.
//

#include "Beam.h"

bool Beam::init(unsigned int nsize) {
    if (beam.size()>0) {   // return error if beam has been already defined once
        return false;
    }
    beam.resize(nsize);
    return true;
}
