/*
1. Cho trước số nguyên dương yourNumber. Bạn hãy viết chương trình để in ra yourNumber có phải là số toàn chẵn hay không?  , 
Số toàn chẵn là số có tất cả các chữ số đều là số chẵn
*/
#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    while( n > 10){
        int temp = n % 10;
        if( temp % 2 ){
            printf("\nKo phai so toan chan");
            return 0;
        }
        n /= 10;
    }
    printf("\nSo toan chan");
    return 0;
}