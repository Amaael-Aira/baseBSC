//
// Created by Amaael  on 6/17/20.
//

#ifndef BASEBSC_FUNCTIONS_H
#define BASEBSC_FUNCTIONS_H
//
//#include "Transmitter.h"
//#include "Receiver.h"

class Transmitter;
class Receiver;

void setCombos(unsigned long long **&combos, const unsigned int &K=50);
void encodeTest(unsigned int &thetaH, unsigned long long &thetaI, const bool *y, const bool * theta, const int &K=50);
void decodeTest(const unsigned int &thetaH, const unsigned long long &thetaI, const bool *y, bool *&thetaHat, const int &K=50);
int flipTest(const bool *y, const int &K=50);
int testEncodeDecode(const int &K=50);

void simulation(Transmitter Tx, Receiver Rx);

#endif //BASEBSC_FUNCTIONS_H
