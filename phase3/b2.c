/*
2. nhập vào số nguyên dương n(có 2 chữ số trở lên), và số z(1 chữ số), tìm xem z xuất hiện trong n bao nhiêu lần
  vd: n : 212327 , z: 2, kết quả là : 3
*/
#include<stdio.h>

int main(){
    int n, temp = 0, z, count = 0;
    printf("Plzz nhap n ");
    scanf("%d", &n);
    printf("\nPlzz nhap z ");
    scanf("%d", &z);
    for(; n > 0;){
        temp = n % 10;
        if(temp == z){
            count++;
        }
        n /= 10;
    }
    printf("\n%d", count);
    return 0;
}