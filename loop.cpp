#include <stdio.h>

int main() {

    for(int i=2; i<10; i=i+2) {
        printf("%d\t", i);

        int evenNumbers[5];
        for (int i= 0; i<5; ++i){
            evenNumbers[i] = 2 * (i + 1);
        }
        printf("Elements of the new array:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", evenNumbers[i]);
    }
    printf("\n");
    }
}