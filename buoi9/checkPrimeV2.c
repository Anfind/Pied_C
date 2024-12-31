#include<stdio.h>
#include<math.h>

void checkPrime(int number);

int main(){
    int n;
    scanf("%d", &n);
    checkPrime(n);
    return 0;
}

void checkPrime(int number){
    if( number >= 2){
        for(int i = 2; i <= sqrt(number); i++){
            if( number % i == 0 ){
                printf("\n ko la so");
                return;
            }
        }
    }
    printf("\n la so ng to");
}
