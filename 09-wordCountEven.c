#include<stdio.h>
/*
*/
int main() {
    int start, end;
    int evenCount = 0;
    printf("\nPls nhap start ");
    scanf("%d", &start);
    printf("\nPls nhap end ");
    scanf("%d", &end);
    for (int i = start; i <= end; i++) {
        if (i & 1) {
            printf("%3d", i);
        }else evenCount ++;
    }
    return 0;
}