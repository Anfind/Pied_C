/*Bài 2 : Nhập số nguyên n. Tính giá trị biểu thức S= 1.2 + 2.3 + 3.4 + ... + n(n+1).
vd: 3 => 20*/
#include<stdio.h>

int main(){
    int n, sum = 0;
    printf("pls nhap so n ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    printf("\nS la%3d", sum);
}