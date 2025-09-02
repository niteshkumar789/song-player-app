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

## 📊 Sequence Diagram (Add & Play Song Flow)

@startuml
actor User
participant "SongPlayerApp" as App
participant "Playlist" as PL
participant "Song" as S

== Add Song ==
User -> App: run() → select "Add Song"
App -> User: Prompt for song details
User --> App: Enter song name, artist, duration
App -> PL: addSong(Song)
PL -> S: create Song(name, artist, duration)
PL -> PL: songs.push_back(Song)
PL --> App: "Song added"

== Play Song ==
User -> App: run() → select "Play Song"
App -> User: Prompt for song number
User --> App: Enter song index
App -> PL: playSong(index)
PL -> S: play()
S --> User: "Now Playing: <song details>"
@enduml

---

## 📂 Project Structure

    Song-player-app
    |
    ├── Song_player/
    |   ├── main.cpp
    |   ├── Song.h
    |   ├── Playlist.h
    |   └── SongPlayerApp.h
    |
    ├── LICENSE.txt
    └── README.md

---

## ⚙️ Installation & Compilation

- Clone: `git clone https://github.com/your-username/song-player-app.git`
- Root directory: `cd song-player-app/Song_player`
- Compile: `g++ main.cpp -o song_player`
- Run: `./song_player`

---

## 🖥️ Sample Run

===== SONG PLAYER MENU =====
1. Add Song
2. Show Playlist
3. Play Song
4. Delete Song
5. Exit

- Enter choice: 1
- Enter song name: Believer
- Enter artist name: Imagine Dragons
- Enter duration (minutes): 3.5
- Added: Believer

===== SONG PLAYER MENU =====
1. Add Song
2. Show Playlist
3. Play Song
4. Delete Song
5. Exit

- Enter choice: 2

--- Playlist ---
1. Believer

---

## 🚀 Concepts Used

- `Encapsulation`: **Data hiding** with private members (Song, Playlist).
- `Composition`: Playlist contains multiple Song objects.
- `Abstraction`: User interacts with SongPlayerApp via menu, **hiding internal logic**.
- `Modularity`: Code split into separate header files for **maintainability**.

---

## 📜 License

This project is licensed under the `MIT License`. See the `LICENSE.txt` file for details.

---

## ✨ Author

`Nitesh Kumar`
3rd Year B.Tech (CSE), Sharda University