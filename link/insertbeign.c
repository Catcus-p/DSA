#include <stdio.h>
#include <stdlib.h>

// Define node structure
struct node {
    int data;
    struct node* next;
};

// Function to insert a node at the beginning
void insertAtBegin(struct node** head, int new_data) {
    struct node* new_node = (struct node*)malloc(sizeof(struct node)); // create node
    new_node->data = new_data;    // assign data
    new_node->next = (*head);     // link old list to new node
    (*head) = new_node;           // move head to point to new node
}

// Function to display the linked list
void displayList(struct node* node) {
    printf("Linked List: ");
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct node* head = NULL; // empty list

    // Insert elements
    insertAtBegin(&head, 20);
    insertAtBegin(&head, 10);
    insertAtBegin(&head, 30);

    // Display list
    displayList(head);

    return 0;
}