#include "calc.h"

int main(int argc, char* argv[]) {

    if (argc < 2) {
        cout << "Nieprawidlowa liczba argumentow!" << endl << endl;
        show_help();
    } else {
        if (strcmp(argv[1], "add") == 0) {
            add(atoi(argv[2]), atoi(argv[3]));
        } else if (strcmp(argv[1], "subtract") == 0) {
            subtract(atoi(argv[2]), atoi(argv[3]));
        } else if (strcmp(argv[1], "volume") == 0) {
            volume(atof(argv[2]), atof(argv[3]), atof(argv[4]), atof(argv[5]));
        } else if (strcmp(argv[1], "help") == 0) {
            show_help();
        } else {
            cout << "Nie ma takiej opcji!" << endl << endl;
            show_help();
        }
    }

    return 0;
}
