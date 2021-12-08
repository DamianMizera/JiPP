#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Song {

private:
    int nr;
    string title;

public:
    Song(int nr, string title) :
    nr(nr),
    title(title) {}

    void print() const {
        cout << nr << ": " << title << endl;
    }
};

class Lista {

private:
    string name;
    list<Song*> songs;

public:
    Lista(string name):
    name(name) {}

    void addSong(Song *song) {
        songs.push_back(song);
    }

    void removeSong(Song *song) {
        songs.remove(song);
    }

    void playSong() {
        cout << "Gram: " << name <<  endl;

        list<Song*>::iterator i;
        for(i = songs.begin(); i != songs.end(); i++) {
            (*i)->print();
        }

        cout << endl;
    }
};

class SongCollection {

private:
    vector<Song*> songs;

public:
    void addTrack(int nr, string title) {
        songs.push_back(new Song(nr, title));
    }

    Song* operator[](const int rhs){
        return songs[rhs];
    }

    ~SongCollection() {
        vector<Song*>::iterator i;
        for(i = songs.begin(); i != songs.end(); i++) {
            delete *i;
        }
    }
};

int main() {

    // Zadanie 1
    string tekst = "Jakis tekst";
    cout << "-------------------------" << endl;
    cout << tekst << endl;
    cout << "-------------------------" << endl;
    string::iterator i;
    for(i = tekst.begin(); i != tekst.end(); i++) {
        if (*i >= 'a' && *i <= 'z') {
            *i -= 32;
        }
    }
    cout << tekst << endl;
    cout << "-------------------------" << endl;

    // Zadanie 2
    SongCollection songCollection;

    songCollection.addTrack(1, "Tytul01");
    songCollection.addTrack(2, "Tutul02");
    songCollection.addTrack(3, "Tytul03");

    Lista lista("Lista");
    lista.addSong(songCollection[0]);
    lista.addSong(songCollection[1]);
    lista.addSong(songCollection[2]);

    lista.playSong();
}