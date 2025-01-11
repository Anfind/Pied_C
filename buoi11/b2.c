#include<stdio.h>

void inputArray(int a[], int *n);
int sumEvenIndexArray(int a[], int n);

int main(){
    int size, a[100] = {0};
    inputArray(a, &size);
    printf("\nTong la :%d",sumEvenIndexArray(a, size));
    return 0;
}

void inputArray(int a[], int *n){
    printf("\nNhap so phan tu n: ");
    scanf("%d", n);
    printf("\nNhap tung phan tu: ");
    for(int i = 1; i < *n; i++){ 
        scanf("%d", &a[i]);
    }
}

int sumEvenIndexArray(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += (i % 2 == 0)*a[i];
    }
    return sum;
}