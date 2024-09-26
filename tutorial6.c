#include <iostream>
#include <string>

using namespace std;

struct Song {
    string title;
    Song* next;
};

class Playlist {
private:
    Song* head;

public:
    Playlist() : head(nullptr) {}

    void addSong(const string& title) {
        Song* newSong = new Song{title, nullptr};
        if (!head) {
            head = newSong;
        } else {
            Song* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newSong;
        }
    }

    void printPlaylist() const {
        Song* temp = head;
        while (temp) {
            cout << temp->title << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    Playlist myPlaylist;

    // Adding initial songs
    myPlaylist.addSong("Numb");
    myPlaylist.addSong("Leave out all the rest");
    myPlaylist.addSong("Carol of the bells");

    // Printing the playlist
    cout << "Your playlist is:" << endl;
    myPlaylist.printPlaylist();

    // Adding a new song
    myPlaylist.addSong("New Song");

    // Printing the updated playlist
    cout << "Updated playlist is:" << endl;
    myPlaylist.printPlaylist();

    return 0;
}
