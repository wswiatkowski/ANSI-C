//Lista 2 Zadanie 2 Wojciech Światkowski 266494

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int CzyMyslnik(char a[]);
int Przypisz(char a[], int pocz, int kon);
int main(int argc, char *argv[]){
    int wejscie,i=1,j=0,tablica[1000];
    int pocz,kon;
    if(CzyMyslnik(argv[1])!=0){
        pocz=Przypisz(argv[1],0,(CzyMyslnik(argv[1])-1));
        kon=Przypisz(argv[1],(CzyMyslnik(argv[1])+1),strlen(argv[1]));
        while((wejscie=getchar())!=0x0A){
                switch(wejscie){
                    case 0x20:
                    case 0x09:
                        i=i+1;
                        tablica[j]=wejscie;
                        j=j+1;
                        break;
                    default:
                        if(i>=pocz&&i<=kon){
                            tablica[j]=wejscie;
                            j=j+1;
                        }

                }
        }

    }else if(CzyMyslnik(argv[1])==0){
        while((wejscie=getchar())!=0x0A){
            switch(wejscie){
                case 0x20:
                case 0x09:
                    i=i+1;
                    break;
                default:
                    if(i==atoi(argv[1])){
                        tablica[j]=wejscie;
                        j=j+1;
                    }
            }
        }
    }
    for(i=0;i<j;i++){
            putchar(tablica[i]);
        }

}

int CzyMyslnik(char a[]){
    int i,pocz,kon;
    for(i=0; i<=(strlen(a)); i++){
        if(a[i]=='-'){
            return i;
        }
    }
    return 0;
}
int Przypisz(char a[], int pocz, int kon){
    int wyj,i;
    char wycinek[kon-pocz];
    for(i=pocz;i<=kon; i++){
        wycinek[i-pocz]=a[i];
    }
    return atoi(wycinek);
}
