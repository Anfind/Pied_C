#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*tinh n!*/
int main(){
    int n, a= 0, b= 1, fib= 0;
    printf("Plsss nhap n ");

    scanf("%d", &n);
    fib = n;
    for(int i = 2; i <= n; i++){
        fib = a + b;
        a = b;
        b = fib;
    }
    printf("\nSo la %d", fib);
    return 0;

}