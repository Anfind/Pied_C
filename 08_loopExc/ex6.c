/*
nhập vào số nguyên dương n(có 2 chữ số trở lên), và số z(1 chữ số),
tìm xem z xuất hiện trong n bao nhiêu lần
    vd: n : 212327 , z: 2, kết quả là : 3
*/
#include<stdio.h>
int main(){
    int n, z, temp=0, count = 0;
    printf("Plzzz nhap so n: %d");
    scanf("%d", &n);
    printf("\nPlzzz nhap so z: %d");
    scanf("%d", &z);
    for( ;n > 0; ) if( (temp = n % 10) == z) count++;
    printf("");
    return 0;
}