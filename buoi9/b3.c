#include<stdio.h>

int sumDigit(int number);
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", sumDigit(n));
}

int sumDigit(int number) {
    int temp, sum = 0;
    for (; number > 0; sum += (number % 10), number /= 10);
    return sum; 
}