/*
Nhập n kiểm tra xem n có phải số hoàn hảo không ?
*/
#include<stdio.h>
#include<math.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            sum += i + n / i;
        }
    }
    if (sqrt(n) == (int)sqrt(n)) {
        sum -= (sqrt(n) + 1);
    }
    if (sum + 1 == n) {
        printf("\n%d So hoan hao", sum + 1);
    }
    else {
        printf("\n%d Ko phai hoan hao", sum + 1);
    }
    return 0;
}