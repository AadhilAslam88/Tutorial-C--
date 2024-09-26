#include <stdio.h.
#define MAX_SIZE 3

struct Queue {
    int qarr [MAX_SIZE];
    int front, rear;

};

void initializeQueue(struct Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

int isEmpty(struct Queue *queue){
    return (queue->front == -1 && queue->rear == -1);
}

int isFull(struct Queue * queue) {
    return (queue-> rear == MAX_SIZE - 1);
}

void enqueue(struct Queue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue is full\n");
        return;
    }

    if (isEmpty(queue)) {
        queue->front = 0;
        queue->rear = 0;
    }

    else {
        queue->rear = (queue->rear + 1);
    }
}