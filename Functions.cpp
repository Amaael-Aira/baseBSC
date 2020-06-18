//
// Created by Amaael  on 6/17/20.
//

#include "Functions.h"

/*
 * constructor: set attributes
 * build list
 * map theta
 * find theta in Tx
 * remove low probability items
 * partition
 * 2 tails??
 * update
 * rejoin??
 * merge  merge/update
 * remove
 * de-map theta hat
 *
 */


/*
 * new list
 * partition in 3 stages
 * transmission
 * confirmation
 * update
 * merge
 * remove
 * rejoin
 * map theta
 * track theta
 * de-map theta hat
 * split
 * destroy list
 */

/*
 * functions:
 * simulate
 * build matlab array
 * write matlab data
 *
 * build combinations
 *
 */

void setCombos(unsigned long long **&combos, const unsigned int &K) {
    combos = new unsigned long long *[K+1];
    for (int i = 0; i < K+1; i++){
        combos[i] = new unsigned long long [i+1];
        combos[i][0] = 1;
        combos[i][i] = 1;
        for(int j = 1; j < i; j++){
            combos[i][j] = combos[i-1][j] + combos[i-1][j-1];
        }

    }

}

void encodeTest(unsigned int &thetaH, unsigned long long int &thetaI, const bool *y, const bool *theta, const int &K) {

}

void decodeTest(const unsigned int &thetaH, const unsigned long long int &thetaI, const bool *y, bool *&thetaHat,
                const int &K) {

}

int flipTest(const bool *y, const int &K) {
    return 0;
}

int testEncodeDecode(const int &K) {
    // assumes theta is all zeros
    auto y = new bool[K];
    auto theta = new bool[K];
    auto thetaHat = new bool[K];
    unsigned int thetaH;
    unsigned long long thetaI;
    unsigned int i;
    for(unsigned int errors = 0; errors < K+1; errors ++){
        // Set the start error vector
        for(i = 0; i < errors; i++){
            y[i] = true;
            theta[i] = false;
        }
        for(;i<K; i++){
            y[i] = false;
            theta[i] = false;
        }
        do{
            // find thetaH and thetaI
            encodeTest(thetaH, thetaI, y, theta);
            // find thetaHat from thetaH, thetaI
            decodeTest(thetaH, thetaI, y, thetaHat, K);
            // if thetaHat not the zero vector: then the result is an error
            // TODO

        }while (!flipTest(y, K)); // encodes the next error vector y


    }
    return 0;
}
