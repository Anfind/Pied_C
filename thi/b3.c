#include<stdio.h>

int sum_even(int start, int end);

int main() {
    int start, end;
    printf("Nhap start  ");
    scanf("%d", &start);
    printf("\nNhap end  ");
    scanf("%d", &end);
    printf("\nTong la  %d", sum_even(start, end));
    return 0;
}

int sum_even(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += ((i % 2 == 0) * i);
    }
    return sum;
}