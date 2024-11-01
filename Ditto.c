#include<stdio.h>
#include<math.h>

int canmakeequal(int X,int Y,int P){
    return abs(X-Y)%(2*P) == 0;
}

int main(){
    int X,Y,P;
    scanf("%d%d%d",&X,&Y,&P);

    if(canmakeequal(X,Y,P)){
        printf("YES");
    } else{
        printf("NO");
    }
}