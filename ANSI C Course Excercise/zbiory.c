#include <stdio.h>
#include "zbiory.h"
#include <limits.h>

void czytanieZbioru(zbior a){
    int i,poprzEl=INT_MIN;
    int obecEl;
    scanf("%d",&a[0]);
    for(i=1; i<=a[0]; i++){
        scanf("%d",&obecEl);
        if(poprzEl>obecEl){
            printf("Poprzedni element wiekszy od obecnego!");
        }
        else{
            a[i]=obecEl;
            poprzEl=obecEl;
        }

    }
}

void wypisanieZbioru(zbior a){
    int i,poprzEl=INT_MIN,obecEl;
    poprzEl=0;
    for(i=1;i<=a[0];i++){
        obecEl=a[i];
        if(obecEl=!poprzEl){
            printf("%d ",obecEl);
            poprzEl=obecEl;
        }
    }
}

void sumaZbiorow(const zbior a,const zbior b,zbior wynik){
    int i,j;
    int rozmiar;
    int czydolaczyl=0;

    for(i=0;i<=a[0];i++){
        wynik[i]=a[i];
    }

    for(i=1;i<=b[0];i++){
        for(j=1;j<=wynik[0];j++){
            if(wynik[j]>b[i]){
                dolaczElement(wynik,j,b[i]);
                czydolaczyl=1;
                break;
            }
        }
        if(czydolaczyl==0){
            dolaczElement(wynik,j,b[i]);
        }
    }

}

void dolaczElement(zbior a,int indeks,int zmienna){
    int i;
    for(i=a[0];i>=indeks;i--){
        a[i+1]=a[i];
    }
    a[indeks]=zmienna;
    a[0]=a[0]+1;
}

