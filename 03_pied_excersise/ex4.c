//nhập vào 1 số, kiểm tra xem số đó có phải năm nhuận không
#include<stdio.h>

int main(){
    int year;
    printf("Nhap so nam ");
    scanf("%d", &year);
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("\nNam nhuan");
    }else   printf("\nNam ko nhuan");
    
    return 0;
}