#include <stdio.h>

int main(void){
    int wej,max=0,min=2111111111;
    scanf("%d",&wej);
    int maxx=wej, minn=wej;
    do{
        scanf("%d",&wej);

        if(wej==0){
        break;
        }

        if(wej>maxx){
            max=maxx;
            maxx=wej;
        }
        else if(wej>=max){
            max=wej;
        }

        if(wej<minn){
            min=minn;
            minn=wej;
        }
        else if(wej<=min){
            min=wej;
        }
    }while(wej!=0);
    printf("%d %d %d %d",minn,min,max,maxx);
}
