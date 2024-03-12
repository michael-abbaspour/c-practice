//
// Created by Michael Abbaspour on 3/2/24.
//

#include <stdio.h>
#include <stdlib.h>
#include "array/array_rotation.h"

// Write a program that rotates an array to the right by k steps, where k is non-negative.
// For example, given [1,2,3,4,5,6,7] and k = 3, the array should be modified to [5,6,7,1,2,3,4].

void initializeArrayRotation(ArrayRotation *arrRotate, const int *values, int size, int steps) {
    arrRotate->size = size;
    arrRotate->steps = steps;
    arrRotate->values = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; ++i) {
        arrRotate->values[i] = values[i];
    }
}

void rotateArray(ArrayRotation *arrRotate) {
    int *temp;
    int steps = arrRotate->steps % arrRotate->size;

    temp = (int *)malloc(arrRotate->size * sizeof(int));

    for (int i = 0; i < arrRotate->size; ++i) {
        int new_position = (i + steps) % arrRotate->size;
        temp[new_position] = arrRotate->values[i];
    }

    for (int i = 0; i < arrRotate->size; ++i) {
        arrRotate->values[i] = temp[i];
    }

    free(temp);
}

void printArrayRotation(ArrayRotation *arrRotate) {
    printf("Array: ");
    for (int i = 0; i < arrRotate->size; ++i) {
        printf("%d ", arrRotate->values[i]);
    }
    printf("\n");
}

void removeArrayRotation(ArrayRotation *arrRotate) {
    free(arrRotate->values);
    arrRotate->values = NULL;
    arrRotate->size = 0;
    arrRotate->steps = 0;
}