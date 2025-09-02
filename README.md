# song-player-app
A low level design of song player


# 🎵 Song Player App (C++ LLD Project)

A simple **console-based Song Player application** implemented in **C++** using **Object-Oriented Design (OOD)** principles and **Low-Level Design (LLD)** concepts.  
This project demonstrates **encapsulation, modularity, and composition** with `Song`, `Playlist`, and `SongPlayerApp` classes.

---

## 📌 Features
- Add songs (with name, artist, and duration)
- Display playlist with all songs
- Play a specific song
- Delete a song from the playlist
- Simple menu-driven interface

---

## 🏗️ UML Class Diagram

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
    +-----------------------+
    |     Playlist          |
    +-----------------------+
    | - songs: vector<Song> |
    +-----------------------+
    | + addSong()           |
    | + deleteSong()        |
    | + getSong()           |
    | + displayAllSongs()   |
    | + getTotalSongs()     |
    +-----------------------+
            ▲
            |
            | uses
            |
    +-----------------------+
    |   SongPlayerApp       |
    +-----------------------+
    | - playlist: Playlist  |
    +-----------------------+
    | + showMenu()          |
    | + handleInput()       |
    | + run()               |
    +-----------------------+



---

## 📂 Project Structure

Song-player-app
│
├── Song_player/
│ ├── main.cpp
│ ├── Song.h
│ ├── Playlist.h
│ └── SongPlayerApp.h
│
├── LICENSE.txt
└── README.md



---

## ⚙️ Installation & Compilation

### 1. Clone the Repository
```bash
git clone https://github.com/your-username/song-player-app.git
cd song-player-app/Song_player
g++ main.cpp -o song_player
./song_player


🖥️ Sample Run

===== SONG PLAYER MENU =====
1. Add Song
2. Show Playlist
3. Play Song
4. Delete Song
5. Exit
Enter choice: 1
Enter song name: Believer
Enter artist name: Imagine Dragons
Enter duration (minutes): 3.5
Added: Believer

===== SONG PLAYER MENU =====
1. Add Song
2. Show Playlist
3. Play Song
4. Delete Song
5. Exit
Enter choice: 2

--- Playlist ---
1. Believer



🚀 Concepts Used

. Encapsulation: Data hiding with private members (Song, Playlist).
. Composition: Playlist contains multiple Song objects.
. Abstraction: User interacts with SongPlayerApp via menu, hiding internal logic.
. Modularity: Code split into separate header files for maintainability.

📜 License

This project is licensed under the MIT License. See the LICENSE.txt file for details.

✨ Author

Nitesh Kumar
3rd Year B.Tech (CSE), Sharda University