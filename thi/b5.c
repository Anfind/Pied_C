#include<stdio.h>

int gaiThua(int n);

int main(){
    int n;
    printf("Nhap n  ");
    scanf("%d", &n);
    printf("KQ la  %d", gaiThua(n));
    return 0;
}

int gaiThua(int n){
    if( n == 1) return 1;
    return (n*gaiThua(n-1));
}