#include <stdio.h>

void input(int a[], int size);

int main() {
    int n;
    scanf("%d", &n);
    int a[n + 1], b[n + 1];
    input(a, n);
    input(b, n);
    
    int exp_a[n + 1], exp_b[n + 1];
    exp_a[0] = 0; 
    exp_b[n + 1] = 0; 

    for (int i = 1; i <= n; i++) {
        exp_a[i] = exp_a[i - 1] + a[i];
    }
    for (int i = n; i >= 1; i--) {
        exp_b[i] = exp_b[i + 1] + b[i];
    }

    int max = -1e9, k = 0;
    for (int i = 1; i < n; i++) {
        int temp = exp_a[i] + exp_b[i + 1];
        if (temp > max) {
            max = temp;
            k = i+1;
        }
    }

    printf("%d\n", max);
    return 0;
}

void input(int a[], int size) {
    for (int i = 1; i <= size; i++) {
        scanf("%d", &a[i]);
    }
}
