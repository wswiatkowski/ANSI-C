// Wojciech Œwiatkowski 266494 Lista 3 Zadanie 1
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

long long int WiekszaPierwsza(long long int n);
bool CzyPierwsza(long long int n);
int main(void)
{
    long long int n,z;
    int k,i;
    scanf("%I64d %d",&n,&k);
    if(n<0)
    {
        return 2;
    }
    z=WiekszaPierwsza(n);
    for(i=0; i<k; i++)
    {
        printf("%lld\n",z);
        z=WiekszaPierwsza(z);
    }
}

long long int WiekszaPierwsza(long long int n)
{
    long long int i=n+1;
    while(!CzyPierwsza(i))
    {
        i=i+1;
    }
    return i;
}

bool CzyPierwsza(long long int n)
{
    long long int i;
    long long int z=sqrt(n);
    if(n==2)
    {
        return true;
    }
    else if(n%2==0)
    {
        return false;
    }
    for(i=2; i<=z; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
