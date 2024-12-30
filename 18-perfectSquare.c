#include<stdio.h>
#include<math.h>
//
int main() {
    float n;
    scanf("%f", &n);
    if ((n = sqrt(n)) && n == (int)n) {
        printf("\nSo 9 phuong");
    }else printf("\nKo la so 9 phuong");
    return 0;
}


// if( n == pow((int)sqrt(n),2)) printf("\nLa so 9 phuong");