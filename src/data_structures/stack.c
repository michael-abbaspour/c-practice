//
// Created by Michael Abbaspour on 3/6/24.
//

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "stack/stack.h"

Stack* createStack() {
    Stack* stack = (Stack*) malloc(sizeof(Stack));
    stack->top = -1;
    return stack;
}

int isFull(Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

int isEmpty(Stack* stack) {
    return stack->top == -1;
}

void push(Stack* stack, int item) {
    if (isFull(stack)) {
        printf("The stack is full!\n");
    } else {
        stack->items[++stack->top] = item;
        printf("%d pushed to the stack\n", item);
    }
}

int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("The stack is empty!\n");
        return INT_MIN;
    } else {
        return stack->items[stack->top--];
    }
}

int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Tried peeking the stack but it is empty!\n");
        return INT_MIN;
    } else {
        return stack->items[stack->top];
    }
}

void printStack(Stack* stack) {
    printf("Stack elements (top to bottom): ");
    for (int i = stack->top; i >= 0; i--) {
        printf("%d ", stack->items[i]);
    }
    printf("\n");
}