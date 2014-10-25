#include <stdio.h>
#include <stdbool.h>

int main(void){
    int n=5;
    int a[]={1,2,3,4,5};
    nastPerm(n,a);
}

int nastPerm(int n, int a[]){
    int zmienna;
    int indeksNaj=indeksNajwyzszego(n,a);
    int wynik[n];
    int gdzieWpisac;
    int i;
    if(indeksNaj!=0){
        zmienna=a[indeksNaj];
        a[indeksNaj]=a[indeksNaj-1];
        a[indeksNaj-1]=zmienna;
        drukuj(n,a);
        nastPerm(n,a);
    }
    if(indeksNaj==0){
        gdzieWpisac=((sizeof(a)/sizeof(int))-n);
        wynik[gdzieWpisac]=a[0];
        for(i=(gdzieWpisac+n);i>=1;i--){
            a[i]=a[i-1];
        }
        a[gdzieWpisac+n]='\0';
        nastPerm(n-1,a);
    }



}

int indeksNajwyzszego(int n, int a[]){
    int najwyzszy=0;
    int indeksNaj;
    int i;
    for(i=0;i<=n;i++){
        if(a[i]>najwyzszy){
            najwyzszy=a[i];
            indeksNaj=i;
        }
    }
    return indeksNaj;
}
void drukuj(int n, int a[]){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
