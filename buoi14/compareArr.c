#include<stdio.h>

void inputArr(int a[], int *size);
void outputArr(int a[], int size);
int cmpArr(int a1[], int size1, int a2[], int size2 );

int main(){
    int a1[100] = {0};
    int a2[100] = {0};
    int size1 = 0;
    int size2 = 0;
    inputArr(a1, &size1);
    inputArr(a2, &size2);
    outputArr(a1, size1);
    outputArr(a2, size2);
    printf("\nKQ la: %d", cmpArr(a1, size1, a2, size2));
    return 0;
}

int cmpArr(int a1[], int size1, int a2[], int size2){
    int size = size1 < size2 ? size1 : size2;
    for(int i = 0; i < size; i++){
        if(a1[i] > a2[i]){
            return 1;
        } else if(a1[i] < a2[i]){
            return -1;
        }
    }
    if(size1 > size2){
        return 1;
    } else if(size1 < size2){
        return -1;
    }
    return 0;
}
void inputArr(int a[], int *size){
    printf("\nNhap size: ");
    scanf("%d", size);
    printf("\nNhap mang a: ");
    for( int i = 0; i < *size; i++){
        scanf("%d", &a[i]);
    }
}

void outputArr(int a[],int num){
    printf("\n");
    for( int i = 0; i < num; i++){
        printf("%3d", a[i]);
    }
}