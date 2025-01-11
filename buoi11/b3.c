#include<stdio.h>
#include<math.h>

void inputArray(int a[], int *n);
int isPrime(int num);
int sumPrime(int a[], int n);

int main(){
    int size, a[100] = {0};
    inputArray(a, &size);
    printf("Tong la: %d", sumPrime(a,size));
    return 0;
}

void inputArray(int a[], int *n){
    printf("\nNhap n di:");
    scanf("%d", n);
    printf("\nNhap cac phan tu: ");
    for (int i = 0; i < *n; i++){
        scanf("%d", &a[i]);
    }
}

int isPrime(int num){
    for(int i = 2; i <= sqrt(num); i++){
        if( num % i == 0 ) return 0;
    }
    return 1;
}

int sumPrime(int a[], int n){
    int sum = 0;
    for( int i = 0; i < n; i++){
        if( isPrime(a[i])) {
            sum += a[i];
        }
    }
    return sum;
}