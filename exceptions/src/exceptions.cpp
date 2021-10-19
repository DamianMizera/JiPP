#include "exceptions.h"

void divide(int a, int b) {
    if(b == 0) { //blad, gdy dzielimy przez zero
        throw "Dzielenie przez 0!";
    } else if(a % b != 0) { //blad, bo wynikiem ma byc liczba calkowita
        throw "Dzielenie niecalkowitoliczbowe!";
    }

    std::cout << "Wynik dzielenia " << a << " / " << b << " to " << a/b << std::endl; //wyswietlenie wyniku
}

void convert(char text[]) {
    int number = 0;
    int i = 0;

    while(text[i] != '\0') { //petla przechodzi przez caly tekst az do napotkania znaku zakonczenia '\0'
        if (text[i] < 48 || text[i] > 57) { //sprawdzenie czy jest to cyfra (kody ASCII od 48 do 57)
            throw "Znak nie jest cyfra!";
        } else if(10*number + text[i] - '0' < 0) { //sprawdzenie czy uwzglednienie kolejnej cyfry nie przekorczy rozmiaru zmiennej int
            throw "Liczba jest za duza";
        }

        number = 10*number + text[i] - '0'; //"przedluzenie" liczby o kolejna cyfre
        i++;
    }

    std::cout << "Wprowadziles liczbe: " << number << std::endl; //wyswietlenie wyniku
}