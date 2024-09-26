#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int count = 0;

struct stack {
    int elements[MAX];
    int top;
};

typedef struct stack st;

void createEmptyStack(st *s) {
    s->top = -1;
}

int isfull(st *s) {
    return s->top == MAX - 1;
}

int isempty(st *s) {
    return s->top == -1;
}

void printStack(st *s) {
    printf("Stack: ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->elements[i]);
    }
    printf("\n");
}

void push(st *s, int newitem) {
    if (isfull(s)) {
        printf("Stack full\n");
    } else {
        s->top++;
        s->elements[s->top] = newitem;
        count++;
    }
}

int pop(st *s) {
    if (isempty(s)) {
        printf("Stack empty\n");
        return -1; // Return a sentinel value to indicate the stack is empty
    } else {
        int poppedItem = s->elements[s->top];
        s->top--;
        count--;
        return poppedItem;
    }
}

int main() {
    st *s = (st *)malloc(sizeof(st));
    createEmptyStack(s);

    push(s, 20);
    push(s, 40);
    push(s, 60);

    printStack(s);

    int poppedItem = pop(s);
    printf("Popped item: %d\n", poppedItem);

    printStack(s);

}
