#include <iostream>
#include <ctime>
#include "arrays.h"

int main() {
    srand(time(NULL)); //ustawienie ziarna losowosci
    std::cout << "Losowa liczba z zakresu <1,10>: " << randomNumber(1, 10) << std::endl; //testowanie funkcji randomNumber()

    int* arr = nullptr;
    arr = new int[10];  //dynamicznie alokowana tablica
    for(int i = 0; i < 10; i++) {
        arr[i] = randomNumber(1,100); //wypelnianie tablicy danymi
    }

    std::cout << "Utworzona tablica: " << std::endl; //wyswietlanie tablicy
    for(int i = 0; i < 10; i ++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Najwieksza wartosc w tablicy to: " << max_value(arr, 10) << std::endl; //testowanie funkcji max_value()

    std::cout << "Odwrocona tablica wyglada nastepujaco: " << std::endl;
    revert(arr, 10); //odwracanie tablicy
    for(int i = 0; i < 10; i++) { //wyswietlanie odwroconej tablicy
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr; //zwalnianie pamieci
    arr = nullptr;
}