//
// Created by Michael Abbaspour on 3/2/24.
//

#ifndef C_PRACTICE_ARRAY_ROTATION_H
#define C_PRACTICE_ARRAY_ROTATION_H

typedef struct ArrayRotation {
    int *values;
    int size;
    int steps;
} ArrayRotation;

// Declaration for initializing the ArrayRotation struct.
void initializeArrayRotation(ArrayRotation *arrRotate, const int *values, int size, int steps);

// Declaration for the function to implement the array rotation.
void rotateArray(ArrayRotation *arrRotate);

// Declaration for printing the results of the array rotation.
void printArrayRotation(ArrayRotation *arrRotate);

// Declaration for removing the initialization for the ArrayRotation struct.
void removeArrayRotation(ArrayRotation *arrRotate);

#endif //C_PRACTICE_ARRAY_ROTATION_H
