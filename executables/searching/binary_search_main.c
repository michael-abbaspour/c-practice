//
// Created by Michael Abbaspour on 3/4/24.
//

#include "binary_search.h"

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int n = sizeof(array) / sizeof(array[0]);
    int target = 9;

    // Recursive
    int b_search_recursive = binarySearchRecursion(array, target, 0, n - 1);
    printRecursiveBinarySearch(b_search_recursive, target);

    // Iterative
    int b_search_iterative = binarySearchIterative(array, target, 0, n - 1);
    printIterativeBinarySearch(b_search_iterative, target);

    return 0;
}