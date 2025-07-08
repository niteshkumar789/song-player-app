#ifndef SONGPLAYERAPP_H
#define SONGPLAYERAPP_H

#include "Playlist.h"
#include <limits>
#include <algorithm>
#include <string>

class SongPlayerApp {
private:
    Playlist playlist;

    void clearInput() {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

public:
    void showMenu() {
        cout << "\n===== SONG PLAYER MENU =====\n";
        cout << "1. Add Song\n";
        cout << "2. Show Playlist\n";
        cout << "3. Play Song\n";
        cout << "4. Delete Song\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
    }

    void run() {
        int choice;
        while (true) {
            showMenu();
            cin >> choice;
            clearInput();

            switch (choice) {
                case 1: {
                    string name, artist;
                    float duration;

                    cout << "Enter song name: ";
                    getline(cin, name);

                    cout << "Enter artist name: ";
                    getline(cin, artist);

                    cout << "Enter duration (minutes): ";
                    cin >> duration;
                    clearInput();

                    playlist.addSong(Song(name, artist, duration));
                    break;
                }

                case 2:
                    playlist.displayAllSongs();
                    break;

                case 3: {
                    int index;
                    cout << "Enter song number to play: ";
                    cin >> index;
                    clearInput();
                    playlist.playSong(index);
                    break;
                }

                case 4: {
                    int index;
                    cout << "Enter song number to delete: ";
                    cin >> index;
                    clearInput();
                    playlist.deleteSong(index);
                    break;
                }

                case 5:
                    cout << "Goodbye!\n";
                    return;

                default:
                    cout << "Invalid choice. Try again.\n";
            }
        }
    }
};

#endif // SONGPLAYERAPP_H

