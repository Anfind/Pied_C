#include<stdio.h>
#include<math.h>
void checkPrime();

int main(){
    checkPrime();
    return 0;
}

void checkPrime(){
    int n;
    scanf("%d", &n);
    if( n >= 2){
        for(int i = 2; i <= sqrt(n); i++){
            if( n % i == 0){
                printf("\nKo phai");
                return;
            }
        }
    }
    printf("la so ng to");
}