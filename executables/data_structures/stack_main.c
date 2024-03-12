//
// Created by Michael Abbaspour on 3/6/24.
//

#include <stdio.h>
#include "stack/stack.h"

int main() {
    Stack* stack = createStack();

    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    push(stack, 5);

    printStack(stack);

    printf("%d popped from the stack\n", pop(stack));
    printf("The top item is %d\n", peek(stack));

    printStack(stack);

    return 0;
}