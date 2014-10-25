//Lista 2 Zadanie 1 Wojsciech Œwiatkowski 266494
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int wejscie;
    if(argc<2)
    {
    return 1;
    }
    if(strcmp(argv[1],"iso2win")==0)
    {
        while((wejscie=getchar())!=EOF)
        {
            switch(wejscie)
            {
            case 0xA1:
                wejscie=0xA5;
                break;
            case 0xA6:
                wejscie=0x8C;
                break;
            case 0xAC:
                wejscie=0x8F;
                break;
            case 0xB1:
                wejscie=0xB9;
                break;
            case 0xB6:
                wejscie=0x9C;
                break;
            case 0xBC:
                wejscie=0x9F;
                break;
            default:
                wejscie=wejscie;
                break;
            }
            putchar(wejscie);
        }


    }
    if(strcmp(argv[1],"win2iso")==0)
    {
        while((wejscie=getchar())!=EOF)
        {
            switch(wejscie)
            {
            case 0xA5:
                wejscie=0xA1;
                break;
            case 0x8C:
                wejscie=0xA6;
                break;
            case 0x8F:
                wejscie=0xAC;
                break;
            case 0xB9:
                wejscie=0xB1;
                break;
            case 0x9C:
                wejscie=0xB6;
                break;
            case 0x9F:
                wejscie=0xBC;
                break;
            default:
                wejscie=wejscie;
                break;
            }
            putchar(wejscie);
        }


    }
}
