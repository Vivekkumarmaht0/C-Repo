#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int sum = 0;
    for(int i=1; i<N; i++){
        if(N%i==0){
            sum += i;
        }
    }

    if(sum >= N){
        printf("True");
    } else{
        printf("False");
    }
}