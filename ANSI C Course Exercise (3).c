//Lista 1 Zadanie 1 Wojciech Światkowski 266494
#include <stdio.h>
#include <math.h>

long double silnia(int a);
int main(void)
{
    double i,e,roznica;
    double edbl = 0;
    long double eldbl = 0;
    long double el,roznical;
    for(i=0; i<19; i++)
    {
        edbl=edbl+((i+1)/silnia(i));
    }
    edbl=0.5*edbl;
    printf("Typ Double:  %.20f\n", edbl);
    e=exp(1);
    printf("EXP(1): %.20f\n",e);
    roznica=e-edbl;
    printf("ROZNICA: %.20g\n",roznica);

    for(i=0; i<22; i++)
    {
        eldbl=eldbl+((i+1)/silnia(i));
    }
    eldbl=0.5*eldbl;
    printf("Typ LDouble: %.20lf\n", eldbl);
    el=expl(1);
    printf("EXPL(1): %.20lf\n",el);
    roznical=el-eldbl;
    printf("ROZNICA: %.20lg\n",roznical);



}

long double silnia(int a)
{
    long double i;
    long double sln = 1;
    for(i=1; i<a+1; i++)
    {
        sln=sln*i;
    }
    return sln;
}
