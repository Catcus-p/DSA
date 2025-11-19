#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertEnd(int value) {
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        return;
    }
    struct node *temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
}

void deleteBegin() {
    if (head == NULL) {
        printf("List empty\n");
        return;
    }

    struct node *temp = head;
    head = head->next;
    free(temp);
}

void display() {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    display();
    deleteBegin();
    display();

    return 0;
}