//
// Created by Michael Abbaspour on 3/8/24.
//

#include <stdio.h>
#include <stdlib.h>
#include "linked_list/singly_linked_list.h"

void appendNode(Node** head_ref, int new_data) {
    // Allocate memory for the new node.
    Node* new_node = (Node*)malloc(sizeof(Node));
    Node* last = *head_ref; // Used to traverse the list.

    // Assign data to the new node and make its next node as NULL.
    new_node->data = new_data;
    new_node->next = NULL;

    // If the linked list is empty, then make the new node the head.
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    // Else we will traverse until the last node.
    while (last->next != NULL) {
        last = last->next;
    }

    // Change the next of the last node.
    last->next = new_node;
}

void printLinkedList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}