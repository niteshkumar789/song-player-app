#ifndef SONG_H
#define SONG_H

#include <iostream>
using namespace std;

class Song {
private:
    string name;
    string artist;
    float duration;

public:
    Song(string name, string artist, float duration) : name(name), artist(artist), duration(duration) {}

    void play() const {
        cout << "Now Playing: " << name << " by " << artist
            << " (" << duration << " mins)" << endl;
    }

    string getName() const {
        return name;
    }
};

#endif // SONG_H
