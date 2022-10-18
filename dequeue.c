#include <stdio.h>
#define MAX_SIZE 8

int QUEUE[MAX_SIZE];
int front=0, rear=0;

int enqueue(int item) {
    if ((rear +1) % MAX_SIZE == front) {
        printf("큐 포화상태입니다.\n");
        return 0;
    }
    else
    rear = (rear + 1) % MAX_SIZE;
    QUEUE[rear] = item;
    printf("enqueue>>Queue[%d]=%d\n",rear,QUEUE[rear]);
    return 1;
}
int dequeue() {
    if ( front == rear) {
        printf("큐 공백상태입니다.\n");
        return 0;
    }
    front = (front + 1) % MAX_SIZE;
    return 0;
}
int main() {
    int value;
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    dequeue();
    return 1;
}
