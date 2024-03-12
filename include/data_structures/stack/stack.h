//
// Created by Michael Abbaspour on 3/6/24.
//

#ifndef C_PRACTICE_STACK_H
#define C_PRACTICE_STACK_H
#define MAX_SIZE 15

typedef struct Stack {
    int items[MAX_SIZE];
    int top;
} Stack;

// Creating a stack.
Stack* createStack();

// Checks to see if the stack is full.
int isFull(Stack* stack);

// Checks to see if the stack is empty.
int isEmpty(Stack* stack);

// Adds an item to the stack.
void push(Stack* stack, int item);

// Removes an item from the stack.
int pop(Stack* stack);

// Get the top item of the stack.
int peek(Stack* stack);

// Prints the elements of the stack.
void printStack(Stack* stack);

#endif //C_PRACTICE_STACK_H
