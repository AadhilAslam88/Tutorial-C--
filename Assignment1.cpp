#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void createArray(int arr[], int *size) {
    printf("Enter the number of elements in the array: ");
    scanf("%d", size);

    printf("Enter the elements of the array:\n");
    for (int i = 0;i < *size; i++) {
        printf("Element %d: ",i + 1);
        scanf("%d", &arr[i]);
    }
}


void updateElements(int arr[], int size){
    int index, newValue;

    printf("Enter the index to updateL ");
    scanf("%d", &index);

    if (index >= 0 && index < size) {
        printf("Enter the index to update: ");
        scanf("%d", &newValue);
        arr[index] = newValue;
        printf("Element updated successfully.\n");
    }
    else {
        printf("Invalid index.\n");

    }
}

void deleteElements(int arr[], int *size){
    int index;

    printf("Enter the index to delete: ");
    scanf("%d", &index);

    if (index >= 0 &&index < *size ) {
        for(int i = index; i < *size -1; i++){
            arr[i] = arr[i + 1];
        }
        (*size)--;
        printf("Element deleted successfully.\n");
        }
        else {
            printf("Invalid index.\n");
    }
}

void displayArray(int arr[], int size) {
    printf("Current array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE], size = 0, choice;

    while (1){
        printf("\nArray Generator Machine\n");
        printf("1. Create an array\n");
        printf("2. Modify Array\n");
        printf("3. Display Array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createArray(arr, &size);
                break;
            case 2:
                printf("1. Update Elements\n");
                printf("2. Delete Elements\n");
                printf("Enter your choice: ");
                int modifyChoice;
                scanf("%d", &modifyChoice);

                if (modifyChoice == 1) {
                    updateElements(arr, size);
                }
                else if (modifyChoice == 2) {
                    deleteElements(arr, &size);
                }
                else {
                    printf("Invalid choice.\n");
                }
                break;

            case 3:
                displayArray(arr, size);
                break;

            case 4:
                exit(0);
                break;

            default:
                printf("Invalid choice. Please try again. \n");
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define MAX_BOOKS 10

void displayArray(int *arr,int size) {
    printf("Current array: ");
    for (int i = 0; i< size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int books[MAX_BOOKS] = {101, 102, 103, 170, 105, 161, 107, 110, 109, 115};
    int size = MAX_BOOKS;

    printf("Initial book IDs: \n");
    displayArray(books,size);

    books[2] = 120;
    printf("\nUpdated the value at index 2 to 120. \n");

    printf("Value at index 5: %d\n", books[5]);

    printf("\nFinal book IDs after modifications: \n");
    displayArray(books,size);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define MAX 20

typedef struct  {
    int items[MAX];
    int top;
} Stack;

void initStack(Stack *s) {
    s->top = -1;
}

int isFull(Stack *s){
    return s->top == MAX - 1;
}

int isEmpty(Stack *s) {
    return s->top == -1;

}
void push(Stack *s, int value) {
    if(isFull(s)) {
        printf("Stack is full. Cannot push %d\n", value);
    }
    else {
        s-> items[++(s->top)] = value;
    }
}

int pop(Stack *s){
    if (isEmpty(s)) {
        printf("Stack is empty. Cannot pop.\n");
        return -1;
    }
    else{
        return s->items[(s->top)--];
    }
}

int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty. Cannot peek.\n");
        return -1;
    }
    else {
        return s->items[s->top];
    }
}

void displayStack(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack id empty.\n")
    }
    else {
        printf("Stack: ");
        for (int i = 0; i <= s->top; i++) {
            printf("%d ", s->items[i]);
        }
        printf("\n");
    }
}
int main() {
    Stack s;
    initStack(&s);

    int bookIDs[] = {101, 102, 103, 170, 105, 161, 107, 110, 109, 115};
    int n = sizeof(bookIDs) / sizeof(bookIDs[0]);

    for (int i = 0; i < n; i++){
        push(&s, bookIDs[i]);
    }
    printf("After adding book IDs to the stack:\n");
    displayStack(&s);

    int removed = pop(&s);
    if (removed != -1) {
        printf("Removed top element: %d\n",removed);
    }

    push(&s, 190);
    push(&s, 200);
    printf("After adding 190 and 200 to the stack: \n");
    displayStack(&s);

    int topElement = peek(&s);
    if (topElement != -1) {
        printf("Current top element: %d\n", topElement);
    }

    printf("Final state of the stack: \n");
    displayStack(&s);

    return 0;

}