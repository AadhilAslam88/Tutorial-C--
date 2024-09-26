#include <stdio.h>
#include <string.h>
#define MAX 6

char queue[MAX][30]; // Array of strings to store names
int front = -1, rear = -1;

void enqueue(char name[]) {
    if ((rear + 1) % MAX == front) {
        printf("Queue is full. Cannot book more tickets.\n");
    } else {
        if (front == -1) front = 0;
        rear = (rear + 1) % MAX;
        strcpy(queue[rear], name);
        printf("Ticket booked for %s.\n", name);
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty. No tickets to cancel.\n");
    } else {
        printf("Ticket cancelled for %s.\n", queue[front]);
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
    }
}

void printQueue() {
    if (front == -1) {
        printf("No attendees currently in the queue.\n");
    } else {
        printf("Attendees in the queue:\n");
        int i = front;
        while (i != rear) {
            printf("%s ", queue[i]);
            i = (i + 1) % MAX;
        }
        printf("%s\n", queue[rear]);
    }
}

int main() {
    enqueue("Farzan");
    enqueue("Masry");
    enqueue("Aadhil");
    enqueue("Abilash");
    enqueue("Tehan");
    enqueue("Waruna");
    printQueue();
    dequeue();
    printQueue();
    enqueue("Heshan");
    printQueue();
    return 0;
}
