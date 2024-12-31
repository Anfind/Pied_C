#include<stdio.h>
#include<math.h>

int checkPrime(int number);

int main(){
    int n;
    scanf("%d", &n);
    if(checkPrime(n)){
        printf("la so nguyen to");
    }else printf("Ko la so ng to ");
    return 0;
}

int checkPrime(int number){
    for(int i = 2; i <= sqrt(number); i++){
        if(number % i == 0){
            return 0;
        }
    }
    return number >= 2;// niceee
}