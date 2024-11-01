#include<stdio.h>
int isfibnacci(int N){
    if(N==0 || N==1){
        return 1;
    }

    int a=0,b=1;
    int c = a+b;

    while(c<=N){
        if(c == N){
            return 1;
        }
        a=b;
        b=c;
        c=a+b;
    }

    return 0;
}

int main(){
    int N;
    scanf("%d",&N);

    if(isfibnacci(N)){
        printf("True");
    } else{
        printf("False");
    }
}