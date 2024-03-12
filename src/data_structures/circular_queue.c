//
// Created by Michael Abbaspour on 3/7/24.
//

#include <stdio.h>
#include "queue/circular_queue.h"

void initializeQueue(Queue* queue) {
    queue->front = -1;
    queue->rear = -1;
}

int isFull(Queue* queue) {
    if ((queue->rear + 1) % QUEUE_SIZE == queue->front) {
        return 1;
    } else {
        return 0;
    }
}

int isEmpty(Queue* queue) {
    if (queue->front == -1) {
        return 1;
    } else {
        return 0;
    }
}

void enqueue(Queue* queue, int value) {
    if (isFull(queue)) {
        printf("The queue is full.\n");
    } else {
        if (queue->front == -1) {
            queue->front = 0;
        }
        queue->rear = (queue->rear + 1) % QUEUE_SIZE;
        queue->items[queue->rear] = value;
        printf("Inserted into the queue --> %d\n", value);
    }
}

int dequeue(Queue* queue) {
    int deleted_item;
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return -1;
    } else {
        deleted_item = queue->items[queue->front];
        if (queue->front == queue->rear) {
            // Queue has only one element, so we reset the queue after deleting it.
            initializeQueue(queue);
        } else {
            queue->front = (queue->front + 1) % QUEUE_SIZE;
        }
        return deleted_item;
    }
}

void printQueue(Queue* queue) {
    int i = queue->front;
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue contains: \n");
        while (i != queue->rear) {
            printf("%d ", queue->items[i]);
            i = (i + 1) % QUEUE_SIZE;
        }
        printf("%d", queue->items[i]);
    }
    printf("\n");
}