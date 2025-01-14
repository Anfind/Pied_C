#include<stdio.h>
#include<math.h>
int is_prime(int n);

int main() {
    int n;
    printf("\nNhap 1 so  ");
    scanf("%d", &n);
    printf("%d", is_prime(n));
    return 0;
}

int is_prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return (n >= 2);
}