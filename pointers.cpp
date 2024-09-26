#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int count = 0;

struct stack {
    int elements [MAX];
    int top;
};

typedef struct stack st; //home work

void createEmptyStack(st *s){
    s->top = -1;
}

int main() {

}

int isfull(st *s) {
    if (s->top == MAX - 1)
        return 1;
    else
        return 0;

}

void printStack(st *s) {
    printf("Stack: ");
    for (int i = 0; i < count; i++) {
        printf("%d ", s->elements[i]);
    }
    printf("\n");
}

void push(st *s, int newitem) {
    if(isfull(s)) 
        printf("Stack full");
    
    else
        s-> top++;
        s-> elements[s->top] = newitem;
    
    count++;

}
int main1(){
    st *s =(st *)malloc(sizeof(st));
    createEmptyStack(s);

    push(s,20);
    push(s,40);
    push(s,60);

    printStack(s);
}
