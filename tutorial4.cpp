#include <stdio.h>
#define MAX 6

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int ticketID) {
    if ((rear + 1) % MAX == front) {
        printf("Queue is full. Cannot book more tickets.\n");
    } 
    else {
        if (front == -1) front = 0;
        rear = (rear + 1) % MAX;
        queue[rear] = ticketID;
        printf("Ticket %d booked.\n", ticketID);
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty. No tickets to cancel.\n");
    } 
    else {
        printf("Ticket %d cancelled.\n", queue[front]);
        if (front == rear) {
            front = rear = -1;
        } 
        else {
            front = (front + 1) % MAX;
        }
    }
}

void printQueue() {
    if (front == -1) {
        printf("No attendees currently in the queue.\n");
    } else {
        printf("Attendees in the queue (ticket IDs):\n");
        int i = front;
        while (i != rear) {
            printf("%d ", queue[i]);
            i = (i + 1) % MAX;
        }
        printf("%d\n", queue[rear]);
    }
}

int main() {
    enqueue(133);
    enqueue(343);
    enqueue(91);
    enqueue(177);
    enqueue(75);
    enqueue(212);
    enqueue(120);
    printQueue();
    dequeue();
    printQueue();
    enqueue(120);
    printQueue();
    return 0;
}
