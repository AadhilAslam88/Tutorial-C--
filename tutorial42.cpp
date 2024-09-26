#include <stdio.h>
#include <string.h>
#define MAX 6

// Queue to store names of attendees
char queue[MAX][30];
int front = -1, rear = -1;

// Enqueue function for circular queue
void enqueue(char name[]) {
    // Check if queue is full
    if ((rear + 1) % MAX == front) {
        printf("Queue is full. Cannot book more tickets.\n");
    } else {
        // First, handle the case when the queue is initially empty
        if (front == -1) front = 0;
        
        // Increment rear in a circular manner using modulo arithmetic
        rear = (rear + 1) % MAX;
        strcpy(queue[rear], name);  // Store the name in the queue
        printf("Ticket booked for %s.\n", name);
    }
}

// Dequeue function for circular queue
void dequeue() {
    // Check if the queue is empty
    if (front == -1) {
        printf("Queue is empty. No tickets to cancel.\n");
    } else {
        // Remove the attendee from the queue
        printf("Ticket cancelled for %s.\n", queue[front]);
        
        // Check if the queue will become empty after this operation
        if (front == rear) {
            front = rear = -1;  // Reset the queue to empty
        } else {
            // Move front in a circular manner using modulo arithmetic
            front = (front + 1) % MAX;
        }
    }
}

// Function to display attendees in the queue
void printQueue() {
    // Check if queue is empty
    if (front == -1) {
        printf("No attendees currently in the queue.\n");
    } else {
        printf("Attendees in the queue:\n");
        int i = front;
        // Traverse and print all attendees from front to rear
        while (i != rear) {
            printf("%s ", queue[i]);
            i = (i + 1) % MAX;  // Circular movement
        }
        printf("%s\n", queue[rear]);  // Print the last attendee
    }
}

int main() {
    enqueue("Farzan");
    enqueue("Masry");
    enqueue("Aadhil");
    enqueue("Abilash");
    enqueue("Tehan");
    enqueue("Waruna");
    enqueue("Heshan");
    printQueue();
    dequeue();
    printQueue();
    enqueue("Heshan");
    enqueue("Thamindhu");
    printQueue();
    return 0;
}
