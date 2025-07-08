/*  UML DIAGRAM
        +--------------------+
        |       Song         |
        +--------------------+
        | - name: string     |
        | - artist: string   |
        | - duration: float  |
        +--------------------+
        | + getName()        |
        | + play()           |
        +--------------------+

                ▲
                |
                | contains
                |
        +--------------------+
        |     Playlist       |
        +--------------------+
        | - songs: vector<Song> |
        +--------------------+
        | + addSong()        |
        | + deleteSong()     |
        | + getSong()        |
        | + displayAllSongs()|
        | + getTotalSongs()  |
        +--------------------+

                ▲
                |
                | uses
                |
        +--------------------+
        |   SongPlayerApp    |
        +--------------------+
        | - playlist: Playlist |
        +--------------------+
        | + showMenu()       |
        | + handleInput()    |
        | + run()            |
        +--------------------+
*/

/*
    SongPlayerApp/
    │
    ├── main.cpp
    ├── Song.h
    ├── Playlist.h
    ├── SongPlayerApp.h
*/

#include "SongPlayerApp.h"

int main() {
    SongPlayerApp app;
    app.run();
    return 0;
}


// Compilation instructions: g++ main.cpp -o song_player
// To run the program, use the command: ./song_player