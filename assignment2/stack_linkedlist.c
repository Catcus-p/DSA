#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int value) {
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = top;
    top = newnode;
}

void pop() {
    if(top == NULL) {
        printf("Stack Underflow\n");
        return;
    }
    struct node *temp = top;
    top = top->next;
    free(temp);
}

void display() {
    struct node *temp = top;
    while(temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    push(10);
    push(20);
    push(30);

    display();
    pop();
    display();

    return 0;
}