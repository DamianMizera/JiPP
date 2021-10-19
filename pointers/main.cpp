#include <iostream>
#include "pointers.h"

int main() {
    //Zad1 -------------------------------------------------------------------
    int a, b; //deklaracje zmiennych
    double mean;
    int* ptr_a = nullptr, * ptr_b = nullptr; //deklaracje wskaznikow do zmiennych
    double* ptr_mean = &mean;

    std::cout << "Podaj dwie liczby calkowite: " << std::endl;

    std::cin >> a; //wczytanie dwoch liczb od uzytkownika
    std::cin >> b;

    ptr_a = &a; //ustawienie wskaznikow na wczytane zmienne
    ptr_b = &b;

    find_mean(ptr_a, ptr_b, ptr_mean); //wywolanie funkcji znajdujacej srednia dwoch liczb

    std::cout << "Srednia z " << *ptr_a << " i " << *ptr_b << " to " << *ptr_mean << std::endl; //wyswietlenie wyniku

    //Zad2 -------------------------------------------------------------------

    int* arr = nullptr;
    arr = new int[10]; //alokacja pamieci dla tablicy
    std::cout << "Podaj 10 elementow tablicy: " << std::endl;

    int* copy_ptr = arr;
    for(int i = 0; i < 10; i++) { //wczytanie danych do tablicy z uzyciem wskaznikow
        std::cin >> *copy_ptr;
        copy_ptr++;
    }

    std::cout << "Wypisuje elementy wieksze od zera: " << std::endl;

    copy_ptr = arr;
    for(int i = 0; i < 10; i++) { //wypisanie elementow wiekszych od zera z uzyciem wskaznikow
        if(*copy_ptr > 0)
            std::cout << *copy_ptr << " ";
        copy_ptr++;
    }
    std::cout << std::endl;

    //Zad3 -------------------------------------------------------------------

    int j, k, l;
    std::cout << "Podaj trzy liczby: ";
    std::cin >> j >> k >> l; //wczytanie trzch liczb od uzytkownika

    sort(&j, &k, &l); //wywolanie funkcji sortujacej opartej na wskaznikach

    std::cout << "Twoje liczby posortowane: " << j << " " << k << " " << l << std::endl; //wyswietlenie wyniku

    //Zad4 -------------------------------------------------------------------

    int x = 2; //definicje zmiennych
    int y = 0;
    int* ptr = &y; //definicja wskaznika do zmiennej y

    std::cout << "Przed wywolaniem funkcji set(): " << std::endl;
    std::cout << "x = " << x << ", y = " << y << std::endl; //wyswietlenie stanu przed wywolaniem funkcji set()

    set(x, ptr); //wywolanie funkcji set(), ktora ustawia wartosc zmiennej x zmiennej, wskazywanej przez wskaznik ptr

    std::cout << "Po wywolaniem funkcji set(): " << std::endl;
    std::cout << "x = " << x << ", y = " << y << std::endl; //wyswietlenie stanu po wywolaniu funkcji set()
}