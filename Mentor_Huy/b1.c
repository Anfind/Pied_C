#include<stdio.h>
#include<math.h>

int second_max(int num);

int main() {
    int num;
    printf("Nhap number di: ");
    scanf("%d", &num);
    printf("\nSo lon thu 2 la: %d", second_max(num));
    return 0;
}

int second_max(int num) {
    int temp = 0;
    int max = num%10, sec_max = 0;
    if(num/10 == 0) return num;
    while(num>0){
        temp = num%10;
        if(temp > max){
            sec_max = max;
            max = temp;
            printf("\n1: %d", temp);
        }else if( temp > sec_max && temp != max){
            sec_max = temp;
            printf("\n2: %d", temp);
        }
        num /= 10;
    }
    return sec_max;
}