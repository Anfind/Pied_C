#include<stdio.h>
// factorial
int factorial(int n){
    if(!n) return 1;
    return n*factorial(n-1);
}
//fibo
int fibo(int n){
    if(n - 1 < 2) return 1;
    return (fibo(n-1) + fibo(n-2));
}
int main(){
    printf("%d", factorial(6));
    printf("\n%d", fibo(7));
    return 0;
}