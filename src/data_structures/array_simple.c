//
// Created by Michael Abbaspour on 3/3/24.
//

#include <stdio.h>
#include "array/array_simple.h"

int getLargestArrayElement(const int array[], int size) {
    int max_element = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max_element) {
            max_element = array[i];
        }
    }
    return max_element;
}


void printLargestArrayElement(int result) {
    printf("The largest element in the array is: %d\n", result);
}