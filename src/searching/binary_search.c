//
// Created by Michael Abbaspour on 3/4/24.
//

#include <stdio.h>
#include "binary_search.h"

/**
 * Performs a recursive binary search algorithm.
 * @param array
 * @param target
 * @param lower_bound
 * @param higher_bound
 * @return
 */
int binarySearchRecursion(const int array[], int target, int lower_bound, int higher_bound) { // NOLINT(*-no-recursion)
    if (lower_bound > higher_bound) {
        return -1;
    }

    int middle = lower_bound + (higher_bound - lower_bound) / 2;

    if (array[middle] == target) {
        return middle;
    } else if (array[middle] > target) {
        return binarySearchRecursion(array, target, lower_bound , middle - 1);
    } else if (array[middle] < target) {
        return binarySearchRecursion(array, target, middle + 1, higher_bound);
    } else {
        return -1;
    }
}

/**
 * Prints the results of the function binarySearchRecursion.
 * @param result
 * @param target
 */
void printRecursiveBinarySearch(int result, int target) {
    if (result == -1) {
        printf("Target element %d not found in the recursive binary search array.\n", target);
    } else {
        printf("Target element %d for the recursive binary search array found at index: %d\n", target, result);
    }
}

/**
 * Performs an iterative binary search algorithm.
 * @param array
 * @param target
 * @param lower_bound
 * @param higher_bound
 * @return
 */
int binarySearchIterative(const int array[], int target, int lower_bound, int higher_bound) {
    while (lower_bound <= higher_bound) {
        int middle = lower_bound + (higher_bound - lower_bound) / 2;

        if (array[middle] == target) {
            return middle;
        } else if (array[middle] < target) {
            lower_bound = middle + 1;
        } else {
            higher_bound = middle - 1;
        }
    }
    return -1;
}

/**
 * Prints the results of the function printIterativeBinarySearch.
 * @param result
 * @param target
 */
void printIterativeBinarySearch(int result, int target) {
    if (result == -1) {
        printf("Target element %d not found in the iterative binary search array.\n", target);
    } else {
        printf("Target element %d for the iterative binary search array found at index: %d\n", target, result);
    }
}