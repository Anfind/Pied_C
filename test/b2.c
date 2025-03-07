#include<stdio.h>

void input(int a[], int *num);
void out(int a[], int num);
int insertArr(int a[], int *size, int pos, int key);

int main(){
    int Arr[100] = {0};
    int size = 0;
    int pos, key;
    input(Arr, &size);
    out(Arr, size);
    printf("\nNhap vi tri: ");
    scanf("%d", &pos);
    printf("\nNhap gia tri: ");
    scanf("%d", &key);
    int flag = insertArr(Arr, &size, pos, key);
    if (flag) {
        out(Arr, size);
    }
    return 0;
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
    printf("\n");
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