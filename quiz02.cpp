#include <stdio.h>

int main() {
    // (a) Print even numbers between 1 and 10
    // Expression 1 is executed (one time) before the execution of the code block.
    // Expression 2 defines the condition for executing the code block
    // Expression 3 is executed (every time) after the code block has been executed

    for (int i = 2; i < 10; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    // (b) Store even numbers in an array
    int evenNumbers[4]; 
     // Data type is int
    // Variable name is evenNumbers
    for (int i = 0; i < 4; ++i) {
        evenNumbers[i] = 2 * (i + 1);
    }

    // (c) Print the elements of the array
    printf("Elements of the new array:\n");
    for (int i = 0; i < 4; ++i) {
        printf("%d ", evenNumbers[i]);
    }
    printf("\n");

    // (d) Modify array: If value is 4, set it to 0
    for (int i = 0; i < 4; ++i) {
        if (evenNumbers[i] == 4) {
            evenNumbers[i] = 0;
        }
    }

    // Print modified array
    printf("Modified array after setting 4 to 0:\n");
    for (int i = 0; i < 4; ++i) {
        printf("%d ", evenNumbers[i]);
    }
    printf("\n");

    // (e) Print both index and value
    printf("Index and value of the array:\n");
    for (int i = 0; i < 4; ++i) {
        printf("Index %d: %d\n", i, evenNumbers[i]);
    }

    return 0;
    // a return value of 0 indicates successful execution of the program.
}
