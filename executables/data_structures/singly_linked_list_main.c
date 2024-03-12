//
// Created by Michael Abbaspour on 3/8/24.
//

#include <stdio.h>
#include "linked_list/singly_linked_list.h"

int main() {
    Node* head = NULL; // Starts with an empty list.

    // Add nodes to the list.
    appendNode(&head, 6);
    appendNode(&head, 7);
    appendNode(&head, 1);

    // Print out the linked list.
    printf("Created linked list is: ");
    printLinkedList(head);

    return 0;
}