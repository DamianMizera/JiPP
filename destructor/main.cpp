#include <iostream>

using namespace std;

class Tablica {
public:
    int* arr;

    Tablica() { //konstruktor
        cout << "Wywolano konstruktor!" << endl;
        arr = new int[1024]; //alokacja pamieci
    }

    ~Tablica() { //destruktor
        cout << "Wywolano destruktor!" << endl;
        delete[] arr; //zwolnienie pamieci
    }
};

int main() {
    char c;

    Tablica* tablica;
    tablica = new Tablica;
    cout << "Pausa" << endl;
    cin >> c;
    delete tablica;
}