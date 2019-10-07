#include "main.h"

int parity(unsigned int userNum) {
    int numOnes = 0;

    // Begins with i equaling the entire # and checks if there is a 1 at the end. Adds 1 to numOnes count if yes. Shifts right 1 bit until it is equal to 0.
    for(unsigned int i = userNum; i > 0; i--) {
        if (userNum & 01) { 
            numOnes++; // Adds 1 to numOnes if ending bit is a 1
        }
        userNum = userNum >> 1; // Shifts right one bit
    }

    // If numOnes is even then return a 0, odd return a 1
    if (numOnes % 2 == 0) {
        return 0;
    } else {
        return 1;
    }
}