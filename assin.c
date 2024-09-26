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
