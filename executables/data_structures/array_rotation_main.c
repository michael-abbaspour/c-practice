//
// Created by Michael Abbaspour on 3/2/24.
//

#include <stdio.h>
#include "array/array_rotation.h"

int main() {
    int values[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(values) / sizeof(values[0]);
    int steps = 4;

    ArrayRotation arrRotate;
    initializeArrayRotation(&arrRotate, values, size, steps);

    printf("Before rotation:\n");
    printArrayRotation(&arrRotate);

    rotateArray(&arrRotate);

    printf("After rotation:\n");
    printArrayRotation(&arrRotate);

    removeArrayRotation(&arrRotate);

    return 0;
}