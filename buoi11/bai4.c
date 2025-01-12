#include<stdio.h>

void inputArray(int a[], int* n);
int maxx(int a[], int n);


int main() {
    int size, a[100] = { 0 };
    inputArray(a, &size);
    printf("\nMax la: %d", maxx(a, size));

    return 0;
}

void inputArray(int a[], int* n) {
    printf("\nNhap so n: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        scanf("%d", &a[i]);
    }
}

int maxx(int a[], int n) {
    int maxx = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > maxx) maxx = a[i];
    }
    return maxx;
}
