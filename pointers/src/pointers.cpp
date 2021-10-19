void find_mean(int* ptr_a, int* ptr_b, double* ptr_mean) { //funkcja znajdujaca srednia dwoch liczb z wykorzystaniem wskaznikow
    *ptr_mean = (*ptr_a + *ptr_b) / 2.;
}

void swap(int *a, int *b) { //funkcja zamiany wartosci zmiennych z uzyciem wskaznikow
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(int* a, int* b, int* c) { //funkcja sortowania trzech zmiennych z uzyciem wskaznikow
    if(*a > *b) swap(a, b);
    if(*a > *c) swap(a, c);
    if(*b > *c) swap(b, c);
}

void set(int x, int* w) { //funkcja wpisujaca wartosc zmiennej x do zmiennej wskazywanej przez w
    *w = x;
}