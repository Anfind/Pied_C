#include<stdio.h>

void inputArray(int a[], int *num);
void outputArray(int a[], int num);
int sumArray(int a[], int num);
float avgSumArray(int sum, int num);

const int MAX = 100;

int main(){
    int a[MAX] = {0};
    int n;
    inputArray(a,&n);
    outputArray(a,n);
    int sum = sumArray(a, n);
    printf("\nTong la: %d",sum );
    printf("\nTrung binh la: %.2f", avgSumArray(sum, n));
    return 0;
}

void inputArray(int a[], int *num){
    printf("\nNhap so phan tu: ");
    scanf("%d", num);
    for(int i = 0; i < *num; i++){
        scanf("%d", &a[i]);
    }
}

void outputArray(int a[], int num){
    printf("Nhap so phan tu: ");
    for(int i = 0; i < num; i++){
        printf("%3d", a[i]);
    }
}

int sumArray(int a[], int num){
    int sum = 0;
    for( int i = 0; i < num; i++){
        sum += a[i];
    }
    return sum;
}

float avgSumArray(int sum, int num){
    return 1.0*sum/num;
}