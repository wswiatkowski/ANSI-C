#include <stdio.h>

int main(void)
{
    int i, wejscie, licznik;

    do
    {
        scanf("%d", &wejscie);

        for(i=(wejscie-1); i>1; i--)
        {
            licznik = 0;
            if(wejscie % i == 0)
            {
                printf("%d NIE", wejscie);
                break;
            }
            else
            {
                licznik = 1;
            }

        }
        if(licznik == 1)
        {
            printf("%d TAK", wejscie);
        }
        if(wejscie == 2)
        {
            printf("2 TAK");
        }
        if(wejscie == 1)
        {
            printf("1 NIE");
        }
    printf("\n");
    }
    while(wejscie != 0);
}
