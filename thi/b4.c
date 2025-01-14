#include<stdio.h>

int sum(int n);

int main(){
    int n;
    printf("Nhap n  ");
    scanf("%d", &n);
    printf("KQ la %d",sum(n));
    return 0;
}

int sum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}