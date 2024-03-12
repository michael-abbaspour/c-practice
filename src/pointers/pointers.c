//
// Created by Michael Abbaspour on 3/10/24.
//

#include <stdio.h>
#include "pointers.h"

int num_a = 20;
int num_b = 15;

int *num_a_ptr = &num_a;
int *num_b_ptr = &num_b;

void initializeIntVariables() {
    printf("The value of num_a is: %d\n", num_a);
    printf("The value of num_b is: %d\n", num_b);
    printf("The value of num_a_ptr is: %d\n", *num_a_ptr);
    printf("The value of num_b_ptr is: %d\n", *num_b_ptr);
    printf("The reference of num_a_ptr is: %p\n", num_a_ptr);
    printf("The reference of num_b_ptr is: %p\n", num_b_ptr);
}