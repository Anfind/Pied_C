#include<stdio.h>
#include<math.h>

int main() {
    int start, end;
    printf("Plzzz nhap start: ");
    scanf("%d", &start);
    printf("\nPlzzz nhap end: ");
    scanf("%d", &end);
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }
    int oddSum = 0, evenCount = 0;
    printf("\nCac so le la:");
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {
            printf("%3d", i);
            oddSum += i;
        }else evenCount++;
    }
    printf("\nTong so le la: %d", oddSum);
    printf("\nSo luong so trong doan la: %d", end - start + 1);
    printf("\nSo luong so chan la: %d", evenCount);
    return 0;

}