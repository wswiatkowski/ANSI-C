//Wojciech Œwiatkowski Zadanie 3 Lista 5 266494
#include <stdio.h>
void zapiszDoTablicy(int n, int a[][64]);
void doKtorychMoznaDojechac(int n, int start, int a[][64],int wynik[],int czyMiastoOdwiedzone[],int licznik);
void drukujSortuj(int a[],int n);
int main(void)
{
    int n;
    int start;
    int a[64][64];
    int wynik[64];
    int licznik=1;
    scanf("%d %d",&n,&start);
    int czyMiastoOdwiedzone[n];
    zapiszDoTablicy(n,a);
    doKtorychMoznaDojechac(n,start,a,wynik,czyMiastoOdwiedzone,licznik);
    drukujSortuj(wynik,n);


}

void zapiszDoTablicy(int n, int a[][64])
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void doKtorychMoznaDojechac(int n, int start, int a[][64],int wynik[],int czyMiastoOdwiedzone[],int licznik)
{
    int i;
    for(i=1; i<=n; i++)
    {
        if(a[start][i]==1&&czyMiastoOdwiedzone[i]!=1)
        {
            wynik[licznik-1]=i;
            licznik=licznik+1;
            czyMiastoOdwiedzone[i]=1;
            doKtorychMoznaDojechac(n,i,a,wynik,czyMiastoOdwiedzone,licznik);
        }
    }
}

void drukujSortuj(int a[],int n)
{
    int i,j;
    int rozmiar=0;
    int zmienna;
    while(a[rozmiar]!=0)
    {
        rozmiar=rozmiar+1;
    }
    for (i = 0; i<rozmiar; i++)
    {
        for (j=0; j<rozmiar-1-i; j++)
        {
            if (a[j] > a[j+1])
            {
                zmienna = a[j+1];
                a[j+1] = a[j];
                a[j] = zmienna;
            }
        }
    }
    for(i=0; i<rozmiar; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
