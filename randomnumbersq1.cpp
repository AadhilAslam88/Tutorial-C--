#include <stdio.h>
#include <stdlib.h>
#define MAX 10



int main() {
    for (int i = 0; i < 10; i++) {
        int num = rand() % 21; 
        if (num % 2 == 0) {
            printf("Value is Even: %d\n", num);
        } else {
            printf("Value is Odd: %d\n", num);
        }
    }
}

