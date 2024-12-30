/*
1. nhập vào số nguyên dương n, đảo ngược các chữ số của số đó (chỉ dùng for if else / và %)
*/
#include<stdio.h>
#include<math.h>

int main(){
    int n, temp = 0, reverses = 0;
    scanf("%d", &n);
    for( ; n > 0 ; ){
        temp = n % 10;
        reverses = reverses*10 + temp;    
        n /= 10;
    }
    printf("\n%d", reverses);
    return 0;
}