//
// Created by Michael Abbaspour on 3/4/24.
//

#ifndef C_PRACTICE_BINARY_SEARCH_H
#define C_PRACTICE_BINARY_SEARCH_H

// Binary Search.
int binarySearchRecursion(const int array[], int target, int lower_bound, int higher_bound);
void printRecursiveBinarySearch(int result, int target);

int binarySearchIterative(const int array[], int target, int lower_bound, int higher_bound);
void printIterativeBinarySearch(int result, int target);

#endif //C_PRACTICE_BINARY_SEARCH_H
