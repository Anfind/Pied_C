#include<stdio.h>

void inputArray(int a[], int* n);
int sumEvenArray(int a[], int n);
int main() {
    int a[100] = { 0 };
    int size;
    inputArray(a, &size);
    
    printf("\nTong la: %d",sumEvenArray(a, size));
    return 0;
}

void inputArray(int a[], int* n) {
    printf("Nhap n di: ");
    scanf("%d", n);
    printf("\nNhap tung phan tu: ");
    for (int i = 0; i < *n; i++) {
        scanf("%d", &a[i]);
    }
}

int sumEvenArray(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum +=  (a[i] % 2 == 0)*a[i];
    }
    return sum;
}