/*
nhập vào số nguyên n, tìm digit lớn nhất trong số đó
  n = 10297 => 9
  */
#include<stdio.h>
#include<math.h>

int main() {
    int n, max = 0, temp=0;
    scanf("%d", &n);
    while (n > 0) {
        if ((temp = n % 10) > max) max = temp;
        n /= 10;
    }
    printf("So lon nhat la:  %d", max);
    return 0;
}