// nhập 3 số ngày tháng năm, đưa ra ngày tháng năm trước và sau
#include<stdio.h>

int main(){
    int date, month, year;
    do{
        printf("\nNhap ngay, thang, nam ");
        scanf("%d %d %d", &date, &month, &year);
        while (getchar() != '\n');
    }while (date > 31 || date < 1 || month > 12 || month < 1);
    


    return 0;
}