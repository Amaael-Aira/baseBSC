//
// Created by Amaael  on 6/17/20.
//

#include "baseList.h"

//baseList::baseList() : K(0), Pe(0) {}

baseList::~baseList() {

}

baseList::baseList(const double pe, const double p, const unsigned int k, const double pout, const double pin,
                   const unsigned int minLenth) : Pe(pe), p(p), K(k), Pout(pout), Pin(pin), minLenth(minLenth) {}



