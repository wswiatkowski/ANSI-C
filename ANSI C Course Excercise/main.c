#include <stdio.h>
#include <stdlib.h>
#include "zbiory.h"

int main(){
    zbior a,b,wynik;
    czytanieZbioru(a);
    czytanieZbioru(b);
    sumaZbiorow(a,b,wynik);
    wypisanieZbioru(wynik);
    return 0;
}

