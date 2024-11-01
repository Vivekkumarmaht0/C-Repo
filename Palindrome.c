#include<stdio.h>
int ispalindrome(int N){
    int originalnumber = N;
    int reversenumber = 0;

    while(N>0){
        int digit = N%10;
        reversenumber = reversenumber*10+digit;
        N /= 10;
    }

    return originalnumber == reversenumber;
}

int main(){
    int N;
    scanf("%d",&N);

    if(ispalindrome(N)){
        printf("Palindrome");
    } else{
        printf("Not Palindrome");
    }
}