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

int main() {
    st *s = (st *)malloc(sizeof(st));
    createEmptyStack(s);

    push(s, 20);
    push(s, 40);
    push(s, 60);

    push(s, 80);
    push(s, 10);
    push(s, 30);

    push(s, 50);
    push(s, 70);
    push(s, 90);

    push(s, 100);
    push(s, 110);


    printStack(s);
    return 0;
}
