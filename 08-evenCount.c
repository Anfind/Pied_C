#include<stdio.h>
#include<stdlib.h>
/*08 evencount 
nhập 2 số ng start và end
in ra àn hình các số trong đoạn từ start đến end
*/
int main(){
    int start, end, count=0, sum;
    printf("\nplzzz nhap start: ");
    scanf("%d", &start);
    printf("\nplzzz nhap end: ");
    scanf("%d", &end);
    if( start > end){
        int temp = start;
        start = end;
        end = temp;
    }
    for(int i =  start; i <= end; i++){
        if( i % 2 == 0){
            printf("%5d", i);
            count++;
            sum += i;
        }
    }
    printf("\n\nSO so chan la: %d", count);
    printf("\nTong cac so chan la: %d", sum);

    return 0;
}