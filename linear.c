#include<stdio.h>
#include<conio.h>
#define N 5
int queue[N];
int front = -1 , rear=-1;
void enqueue(int x){
    if (rear== N-1){
    printf("Queue is full\n");
    }
    else 
        if (front==-1 && rear == -1){
            front =rear=0;
            queue[rear]=x;
        }
    else {
        rear++;
        queue[rear]=x;
        printf("%d enqueued to queue\n", x);
    }
}
