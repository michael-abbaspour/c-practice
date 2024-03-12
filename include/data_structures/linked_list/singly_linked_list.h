//
// Created by Michael Abbaspour on 3/8/24.
//

#ifndef C_PRACTICE_SINGLY_LINKED_LIST_H
#define C_PRACTICE_SINGLY_LINKED_LIST_H

typedef struct Node {
    int data;          // The data the node holds.
    struct Node* next; // Pointer to the next node.
} Node;

void appendNode(Node** head_ref, int new_data);

void printLinkedList(Node* node);

#endif //C_PRACTICE_SINGLY_LINKED_LIST_H
