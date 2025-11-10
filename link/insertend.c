#include <stdio.h>
#include <stdlib.h>

// Define structure for node
struct node {
    int data;
    struct node* next;
};

// Function to insert a node at the end
void insertAtEnd(struct node** head, int new_data) {
    // Step 1: Create a new node
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = NULL;

    // Step 2: If list is empty, new node becomes head
    if (*head == NULL) {
        *head = new_node;
        return;
    }

    // Step 3: Otherwise, traverse to the last node
    struct node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Step 4: Link last node to the new node
    temp->next = new_node;
}

// Function to display linked list
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
    struct node* head = NULL; // Empty list

    // Insert elements at the end
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);

    // Display list
    displayList(head);

    return 0;
}