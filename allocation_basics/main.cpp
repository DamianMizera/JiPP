#include <iostream>
#define N 5
using namespace std;

int main() {
    for(int i = 0; i < 5; ++i) { //petla 5 razy wyswietla JiPP
        cout << "JiPP" << endl;
    }

    int** tablica = new int*[N]; //tworzenie dwuwymiarowej tablicy
    for(int i = 0; i < N; ++i) {
        tablica[i] = new int[N];
    }

    for(int i = 0; i < N; ++i) { //przykladowe dane
        for(int j = 0; j < N; ++j) {
            tablica[i][j] = i + j;
        }
    }

    for(int i = 0; i < N; i++) { //sprawdzenie
        for(int j = 0; j < N; ++j) {
            cout << tablica[i][j] << " ";
        }
    }

    for(int i = 0; i < N; i++) { //zwalnianie pamieci
        delete[] tablica[i];
    }
    delete[] tablica;

    return 0;
}

