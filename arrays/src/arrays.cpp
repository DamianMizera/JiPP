#include <cstdlib>
#include "arrays.h"

int randomNumber(int a, int b) { //funkcja zwraca losowa liczbe z zakresu <1,10>
    return rand() % (b-a+1) + a;
}

int max_value(int* arr, int n) { //funkcja znajdujaca najwieksza wartosc a tablicy arr o rozmiarze n
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

void revert(int* arr, int n) { //funkcja odwracajaca kolejnosc elementow w tablicy arr o rozmiarze n
    for(int i = 0, j = n-1; i < j; i++, j--) {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}