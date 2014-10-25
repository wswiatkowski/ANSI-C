//Wojciech Œwiatkowski 266494 Zadanie 2 Lista 3
#include <stdio.h>

void Drukuj(double wynik[]);
void Dodawanie(double mianA[], double mianB[]);

int main(void)
{
    int i,j;
    char znak;
    double mianA[1000], mianB[1000];
        znak=getchar();
        scanf("%d", &j);
        mianA[0]=j;
        for(i=j+1; i>=1; i--)
        {
            scanf("%lf",&mianA[i]);
        }
        scanf("%d", &j);
        mianB[0]=j;
        for(i=j+1; i>=1; i--)
        {
            scanf("%lf",&mianB[i]);
        }
        Dzialanie(znak,mianA,mianB);


}

void Dzialanie(char a, double mianA[], double mianB[])
{
    switch(a)
    {
    case '+':
        Dodawanie(mianA,mianB);
        break;
    case '-':
        Odejmowanie(mianA,mianB);
        break;
    case '*':
        Mnozenie(mianA,mianB);
        break;
    case '/':
        Dzielenie(mianA,mianB);
        break;
    }
}

void Dodawanie(double mianA[], double mianB[])
{
    double wynik[1000];
    int i,rozmiar;
    if(mianA[0]<mianB[0])
    {
        rozmiar=mianB[0]+1;
        wynik[0]=mianB[0];
    }
    if(mianB[0]==mianA[0])
    {
        wynik[0]=mianB[0]+mianA[0];
        rozmiar=mianA[0];
    }
    if(mianA[0]>mianB[0])
    {
        wynik[0]=mianA[0];
        rozmiar=mianA[0]+1;
    }
    for(i=1; i<=rozmiar+1; i++)
    {
        wynik[i]=mianA[i]+mianB[i];
    }
    Drukuj(wynik);
}

void Odejmowanie(double mianA[], double mianB[])
{
    double wynik[1000];
    int i,rozmiar;
    if(mianA[0]<mianB[0])
    {
        rozmiar=mianB[0]+1;
        wynik[0]=mianB[0];
    }
    if(mianB[0]==mianA[0])
    {
        wynik[0]=mianB[0]-mianA[0];
        rozmiar=mianA[0];
    }
    if(mianA[0]>mianB[0])
    {
        wynik[0]=mianA[0];
        rozmiar=mianA[0]+1;
    }
    for(i=1; i<=rozmiar+1; i++)
    {
        wynik[i]=mianA[i]-mianB[i];
    }
    Drukuj(wynik);
}
void Mnozenie(double mianA[], double mianB[])
{
    int i,j,rozmiarA,rozmiarB;
    double wynik[1000];
    rozmiarA=mianA[0]+1;
    rozmiarB=mianB[0]+1;
    wynik[0]=mianA[0]+mianB[0];
    for(i=1; i<=rozmiarA; i++)
    {
        for(j=1; j<=rozmiarB; j++)
        {
            wynik[i+j-1]=((mianA[i]*mianB[j])+wynik[i+j-1]);
        }
    }
    Drukuj(wynik);
}

void Dzielenie(double mianA[], double mianB[])
{
    /*double wynik[1000];
    int i,j;
    j=mianB[0];
    wynik[0]=mianA[0]-mianB[0];
    for(i=1;i<=j;i++){
        wynik[i]=mianA[i]/mianB[i];
    }
    Drukuj(wynik);*/
    printf("WERSJA BETA - DZIELENIE NIEZAIMPLEMENTOWANE\n");
}
void Drukuj(double wynik[])
{
    int i,j;
    int czyBylo=0;
    j=wynik[0];
    printf("%d ", j);
    for(i=j+1; i>=1; i--)
    {
        if(wynik[i]!=0||czyBylo==1)
        {
            printf("%.2f ",wynik[i]);
            czyBylo=1;
        }
    }
    printf("\n");
}
