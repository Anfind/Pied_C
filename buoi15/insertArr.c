#include<stdio.h>
#include<math.h>

const int MAX = 100;
void inputArr(int a[], int *size);
void outputArr(int a[], int size);
int insertArr(int a[], int *size, int pos, int key); // retunr 1 if valid, 0 if NOT valid

int main(){
    int Arr[MAX] = {0};
    int size = 0;
    int pos, key;
    inputArr(Arr, &size);
    outputArr(Arr, size);
    printf("\nNhap vi tri: ");
    scanf("%d", &pos);
    printf("\nNhap gia tri: ");
    scanf("%d", &key);
    int flag = insertArr(Arr, &size, pos, key);
    if (flag) {
        outputArr(Arr, size);
    }
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

int insertArr(int a[], int *size, int pos, int key){
    if ( pos < 0 || pos > *size) return 0;
    for (int i = *size - 1; i >= pos; i--){
        a[i+1] = a[i];
    }
    a[pos] = key;
    (*size)++;
    return 1;
}

