#include<stdio.h>
#include<math.h>
/*
nhập vào số nguyên dương n, đảo ngược các chữ số của số đó (chỉ dùng for if else / và %)
*/
int main() {
    int n, temp = 0;
    printf("Plzz nhap so n: ");
    scanf("%d", &n);
    for (; n > 0;) {
        temp = n % 10;
        printf("%d", temp);
        n /= 10;
    }
    return 0;
}