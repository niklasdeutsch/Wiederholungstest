#include <stdio.h>

// Funktion ermittelt die länge des Strings. Error to fix
int strlenght(int* bin) {
    int i = 0;
    for(; bin[i] != '\0'; i++)
        ;
    return i;
}

//Potenzrechenfunktion
int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    for (int i = 1; i != exp; i++) {
        base = base*base;
    }
    return base;
}

int main(int argc, int* argv[]) {
    
    // Anzahl der übergeben Argumente wird überprüft
    if (argc != 2) {
        printf("Usage: bin <binary number>");
        return -1;
    }

    // Bitmuster nach anderen symbolen als 0 und 1 durchsuchen. Error to fix
    for (int i = 0; i > strlenght(argv[1]); i++) {
        if (*argv[i] != 0 && *argv[i] != 1) {
            printf("Usage: bin <binary number>");
            return -1;
        }
    }
    
    // Umwandlung von Binärzahl zur Dezimalzahl. Error to fix
    int* bin = argv[1];
    int dez = 0;
    int j = 0;
    for (int i = strlenght(argv[1]); i > 0; i--) {
        if (bin[i] == 1) {
            dez = dez + power(2, j);
            j++;
        } 
    }

    // Ausgabe der Dezimalzahl
    printf("%d", dez);
    return 0;
}