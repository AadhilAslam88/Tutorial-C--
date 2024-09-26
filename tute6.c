#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure of a song
struct song {
    char title[100];
    struct song *next;
};

// Function to print the entire playlist
void printPlaylist(struct song *head) {
    struct song *current = head;
    printf("Your playlist is:\n");
    while (current != NULL) {
        printf("%s -> ", current->title);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to add a new song to the end of the list
void addSong(struct song **head, const char *newTitle) {
    struct song *newSong = (struct song *)malloc(sizeof(struct song));
    strcpy(newSong->title, newTitle);
    newSong->next = NULL;

    if (*head == NULL) {
        *head = newSong; // If the list is empty, make the new song the head
    } else {
        struct song *current = *head;
        while (current->next != NULL) {
            current = current->next; // Traverse to the end of the list
        }
        current->next = newSong; // Add the new song to the end
    }
}

int main() {
    struct song *playlist = NULL; // Initialize the playlist

    // Adding initial songs to the playlist
    addSong(&playlist, "Numb");
    addSong(&playlist, "Leave out all the rest");
    addSong(&playlist, "Carol of the bells");

    // Print the playlist
    printPlaylist(playlist);

    // Example of adding a new song
    char newSongTitle[100];
    printf("Enter a new song title to add: ");
    fgets(newSongTitle, sizeof(newSongTitle), stdin);
    newSongTitle[strcspn(newSongTitle, "\n")] = '\0'; // Remove newline character

    addSong(&playlist, newSongTitle);

    // Print the updated playlist
    printPlaylist(playlist);

    // Free the memory (not shown here for simplicity)
    
    return 0;
}
