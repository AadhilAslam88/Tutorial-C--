#include <stdio.h>

int main() {
    char charArray[] = {'S', 'L', 'T', 'C'};  
    // Data type is char
    // Variable name is charArray

    // (a) Print characters in a single line
    for (int i = 0; i < 4; ++i) {
        printf("%c ", charArray[i]);
    }
    printf("\n");

    // (b) Modification for printing characters:
    // No specific modification needed; just use %c format specifier

    return 0;  
    // a return value of 0 indicates successful execution of the program.
}
