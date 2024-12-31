#include<stdio.h>
#include<math.h>

int checkPrime(){
    int number;
    scanf("%d", &number);
    if( number >= 2){
        for(int i = 2; i <= sqrt(number); i++){
            if( number % i == 0){
                return 0;
            }
        }
    }else return 0;
    return 1;
}

int main(){
    if(checkPrime()){
        printf("La so ng to");
    }else printf("Ko la so ng to");

    return 0;
}