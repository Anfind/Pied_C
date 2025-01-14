#include<stdio.h>

int is_prime(int n);
int sum_digit(int n);
void input(int a[], int* n);
void out(int a[], int n);
int final_sum(int a[], int n);

int main() {
    int n, a[100] = { 0 };
    input(a, &n);
    // out(a, n);
    printf("KQ la  %d", final_sum(a, n));
    return 0;
}

int is_prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return (n >= 2);
}

int sum_digit(int n) {
    int temp = 0, sum = 0;
    for (;n > 0; temp = n % 10, n /= 10, sum += temp);
    return sum;
}

void input(int a[], int* n) {
    printf("Nhap so phan tu  ");
    scanf("%d", n);
    printf("\nNhap tung phan tu  ");
    for (int i = 0; i < *n; i++) {
        scanf("%d", &a[i]);
    }
}

void out(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%4d", a[i]);
    }
}

int final_sum(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (is_prime(a[i])) {
            if (is_prime(sum_digit(a[i]))) sum += a[i];
        }
    }
    return sum;
}