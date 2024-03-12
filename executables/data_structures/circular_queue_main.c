//
// Created by Michael Abbaspour on 3/7/24.
//

#include <stdio.h>
#include "queue/circular_queue.h"

int main() {
    Queue queue;
    initializeQueue(&queue);

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);
    enqueue(&queue, 4);
    enqueue(&queue, 5);
    enqueue(&queue, 6);
    enqueue(&queue, 7);
    enqueue(&queue, 8);
    enqueue(&queue, 9);
    enqueue(&queue, 10);

    printQueue(&queue);

    int element = dequeue(&queue);
    printf("Dequeued element: %d\n", element);

    printQueue(&queue);

    enqueue(&queue, 11);

    printQueue(&queue);

    return 0;
}