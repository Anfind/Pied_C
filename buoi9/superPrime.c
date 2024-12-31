#include<stdio.h>
#include<math.h>
int isPrime(int num);
// Nhap start end, in các prime, tính sumPrime
int main() {
    int start, end, sum = 0, count = 0;
    scanf("%d", &start);
    scanf("%d", &end);
    if (end < start) {
        end *= start;
        start = end / start;
        end /= start;
    }

    for (int num = start; num <= end; num++) {
        if ( isPrime(num) ) {
            printf("%3d", num);
            sum += num;
            count++;
        }
    }
    printf("\nTong la: %d", sum);
    printf("\nSo luong so la: %d", count);
}

int isPrime(int num) {
    for (int i = 2; i <= sqrt(num) ; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return num >= 2;
}
