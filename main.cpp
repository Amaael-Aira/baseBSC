//============================================================================
// Name        : baseBSC.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "mattest.h"
#include "Functions.h"
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	const unsigned int K = 20;
	unsigned long long **combos;
	setCombos(combos, K);
	for(int i = 0; i < K+1; i++){
	    printf("%2d: ", i);
	    for(int j = 0; j < i+1; j++){
	        printf("%6llu ", combos[i][j]);
	    }
	    printf("\n");
	}

	return testMat();
}






