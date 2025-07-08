#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <vector>
#include "Song.h"

class Playlist {
private:
    vector<Song> songs;

public:
    void addSong(const Song& song) {
        songs.push_back(song);
        cout << "Added: " << song.getName() << endl;
    }

    void deleteSong(int index) {
        if (index < 1 || index > songs.size()) {
            cout << "Invalid song number.\n";
            return;
        }
        cout << "Deleted: " << songs[index - 1].getName() << endl;
        songs.erase(songs.begin() + (index - 1));
    }

    void displayAllSongs() const {
        if (songs.empty()) {
            cout << "Playlist is empty.\n";
            return;
        }
        cout << "\n--- Playlist ---\n";
        for (size_t i = 0; i < songs.size(); ++i) {
            cout << i + 1 << ". " << songs[i].getName() << endl;
        }
    }

    void playSong(int index) const {
        if (index < 1 || index > songs.size()) {
            cout << "Invalid song number.\n";
            return;
        }
        songs[index - 1].play();
    }

    int getTotalSongs() const {
        return songs.size();
    }
};

#endif // PLAYLIST_H
