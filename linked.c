#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};
int main() {
    // Create 4 nodes
    struct Node* node1 = NULL;
    struct Node* node2 = NULL;
    struct Node* node3 = NULL;
    struct Node* node4 = NULL;

    // Allocate memory for each node
    node1 = (struct Node*)malloc(sizeof(struct Node));
    node2 = (struct Node*)malloc(sizeof(struct Node));
    node3 = (struct Node*)malloc(sizeof(struct Node));
    node4 = (struct Node*)malloc(sizeof(struct Node));
    // Add data to each node
    node1->data = 100;
    node2->data = 150;
    node3->data = 200;
    node4->data = 250;
    // Connect the nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL; // Last node points to NULL
    // Function to print the linked list
    void printList(struct Node* n) {
        while (n != NULL) {
            printf("%d -> ", n->data);
            n = n->next;
        }
        printf("NULL\n");
    }

    // Print the list
    printList(node1);
    
    // Free allocated memory
    free(node1);
    free(node2);
    free(node3);
    free(node4);

    return 0;
}
