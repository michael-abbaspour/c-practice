//
// Created by Michael Abbaspour on 3/3/24.
//

#include "array/array_simple.h"

int main() {
    int values[] = {10, 4, 3, 5, 9, 3, 7, 6, 2};
    int size = sizeof(values) / sizeof(values[0]);
    int result = getLargestArrayElement(values, size);

    printLargestArrayElement(result);

    return 0;
}