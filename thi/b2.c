#include<stdio.h>
#include<math.h>

void sum(int n);

int main() {
    int n;
    printf("\nNhap so nguyen  ");
    scanf("%d", &n);
    sum(n);

    return 0;
}

void sum(int n) {
    int temp = 0, sum = 0;
    for (;n > 0; temp = n % 10, n /= 10, sum += temp);
    printf("%d", sum);
}

