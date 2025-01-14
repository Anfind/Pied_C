#include<stdio.h>
#include<math.h>

void input(int a[], int *num);
void out(int a[], int num);
float avg_array(int a[], int size);
int sum_even(int a[], int size);
int sum_evenIndex(int a[], int size);
int is_prime(int num);
int sum_prime_element(int a[], int size);
int main(){
    int size, a[100] = {0};
    input(a, &size);
    out(a, size);
    printf("\nTrung binh la: %.3f", avg_array(a, size)); 
    printf("\nTong cac so chan la: %d", sum_even(a, size));
    printf("\nTong cac so co vi tri chan la: %d", sum_evenIndex(a, size));
    printf("\nTong cac so nguyen to trong mang: %d", sum_prime_element(a, size));
    return 0;
}

int sum_prime_element(int a[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        if(is_prime(a[i])){
            sum += a[i];
        }
    }
    return sum;
}

int is_prime(int num){
    for(int i = 2; i <= sqrt(num); i++){
        if( num % i == 0){
            return 0;
        }
    }
    return (num >= 2);
}

int sum_evenIndex(int a[], int size){
    int sum=0;
    for (int i = 2; i < size; i += 2){
        sum += a[i];
    }
    return sum;
}

void input(int a[], int *num){
    printf("\nNhap n di: ");
    scanf("%d", num);
    printf("\nNhap tung phan tu: ");
    for( int i = 0; i < *num; i++){
        scanf("%d", &a[i]);
    }
}

void out(int a[], int num){
    for( int i = 0; i < num; i++){
        printf("%  d", a[i]);
    }
}

float avg_array(int a[], int size){
    float sum = 0;
    for( int i = 0; i < size;i++){
        sum += a[i];
    }
    return sum/size;
}

int sum_even(int a[], int size){
    int sum = 0;
    for( int i = 0; i <= 10; i++){
        if (!(a[i] & 1)) sum += a[i];
    }
    return sum;
}








































































