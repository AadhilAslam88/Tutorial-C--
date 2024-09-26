#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int stackA[MAX], stackB[MAX];

int topA = -1, topB = -1;

// Stack operations
void push(int stack[], int *top, int value) {
    if (*top == MAX - 1) {
        printf("Stack is full.\n");
    } else {
        stack[++(*top)] = value;
    }
}

void printStack(int stack[], int top) {
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    // Generate 10 random numbers and classify as even or odd
    for (int i = 0; i < 10; i++) {
        int num = rand() % 21; // Generates random number between 0 and 20
        if (num % 2 == 0) {
            printf("Value is Even: %d\n", num);
            push(stackA, &topA, num);
        } else {
            printf("Value is Odd: %d\n", num);
            push(stackB, &topB, num);
        }
    }

    // Print stackA and stackB
    printf("Stack A (Even Numbers): ");
    printStack(stackA, topA);
    
    printf("Stack B (Odd Numbers): ");
    printStack(stackB, topB);

    return 0;
}
