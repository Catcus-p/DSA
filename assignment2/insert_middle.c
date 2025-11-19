#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertPos(int value, int pos) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (pos == 1 || head == NULL) {
        newnode->next = head;
        head = newnode;
        return;
    }

    struct node *temp = head;
    int i = 1;

    while (temp != NULL && i < pos - 1) {
        temp = temp->next;
        i++;
    }

    if (temp == NULL) {
        printf("Position out of range\n");
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
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
    insertPos(10, 1);
    insertPos(20, 2);
    insertPos(30, 3);
    insertPos(15, 2);  

    display();

    return 0;
}
