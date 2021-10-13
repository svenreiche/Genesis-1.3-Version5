//
// Created by reiche on 12.10.21.
//

#include "Beam.h"

template<typename T>
bool Beam<T>::init(unsigned int nsize) {
    if (beam.size()>0) {   // return error if beam has been already defined once
        return false;
    }
    beam.resize(nsize);
    return true;
}

template<typename T>
void Beam<T>::initSlice(unsigned int index, const std::vector<Particle<T>> &slice) {
    beam[index] = slice;
}

template<typename T>
void Beam<T>::clear() {
    for (auto slice:beam) {slice.resize(0);}  // clear all individual slices first
    beam.resize(0);
}

// generate specialized templates for double and float.
template class Beam<float>;
template class Beam<double>;