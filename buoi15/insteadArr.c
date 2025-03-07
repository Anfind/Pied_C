#include<stdio.h>
#include<math.h>

const int MAX = 100;
void inputArr(int a[], int *size);
void outputArr(int a[], int size);
void insteadArr(int a[], int pos, int key);

int main(){
    int Arr[MAX] = {0};
    int size = 0;
    inputArr(Arr, &size);
    outputArr(Arr, size);
    int pos = 0, key = 0;
    printf("\nNhap vi tri: ");
    scanf("%d", &pos);
    printf("\nNhap gia tri: ");
    scanf("%d", &key);
    insteadArr(Arr, pos, key);
    outputArr(Arr, size);
    return 0;
}

void inputArr(int a[], int *size){
    printf("\nNhap size di: ");
    scanf("%d", size);
    printf("\nNhap tung phan tu: ");
    for( int i = 0; i < *size; i++){
        scanf("%d", &a[i]);
    }
}

void outputArr(int a[], int size){
    printf("\nArr: ");
    for( int i = 0; i < size; i++){
        printf("%3d", a[i]);
    }
}

void insteadArr(int a[], int pos, int key){
    a[pos] = key;
}