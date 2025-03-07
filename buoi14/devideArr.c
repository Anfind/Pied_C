#include<stdio.h>

void inputArr(int a[], int *size);
void outputArr(int a[], int size);
void divideArr(int a[], int *size, int aSub[], int pos, int *sizeSub);
int main(){
    int a[100] = {0};
    int  aSub[100] = {0};
    int size, sizeSub, pos = 0;
    printf("\nNhap pos: ");
    scanf("%d", &pos);
    inputArr(a, &size);
    // outputArr(a, size);
    divideArr(a, &size, aSub, pos, &sizeSub);
    outputArr(a, size);
    outputArr(aSub, sizeSub);
    return 0;
}

void divideArr(int a[], int *size, int aSub[], int pos,  int *sizeSub){
    *sizeSub = 0;
    for( int i = pos; i < *size; i++){
        aSub[ *sizeSub ] = a[i];
        (*sizeSub)++;
    }
    *size = pos;
}

void inputArr(int a[], int *size){
    printf("\nNhap so size: ");
    scanf("%d", size);
    printf("\nNhap mang a: ");
    for ( int i = 0; i < *size; i++){
        scanf("%d", &a[i]);
    }
}

void outputArr(int a[], int size){
    printf("\n");
    for ( int i = 0; i < size; i++){
        printf("%3d", a[i]);
    }
}