//
// Created by Michael Abbaspour on 3/7/24.
//

#ifndef C_PRACTICE_QUEUE_H
#define C_PRACTICE_QUEUE_H
#define QUEUE_SIZE 10

typedef struct {
    int items[QUEUE_SIZE];
    int front;
    int rear;
} Queue;

// Function to create an empty queue.
void initializeQueue(Queue* queue);

// Check to see if the queue is full.
int isFull(Queue* queue);

// Check to see if the queue is empty.
int isEmpty(Queue* queue);

// Adds an element to the queue.
void enqueue(Queue* queue, int value);

// Removing an element from the queue.
int dequeue(Queue* queue);

// Function to display/print the queue.
void printQueue(Queue* queue);

#endif //C_PRACTICE_QUEUE_H