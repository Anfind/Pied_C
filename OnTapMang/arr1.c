#include<stdio.h>
#include<math.h>

void inputArr(int arr[], int *size);
void outputArr(int arr[], int size);
void cpyArr(int arr1[], int size1, int arr2[], int *size2);
void concatArr(int arr1[], int *size1, int arr2[], int *size2);
void *devideArr(int arr1[], int *size1, int *devidedSize);

int main(){
    int arr[100] = {0};
    int arr2[100] = {0};
    int size = 0, size2 = 0;

    inputArr(arr, &size);
    // outputArr(arr, size);
    // cpyArr(arr, size, arr2, &size2);
    inputArr(arr2, &size2);
    concatArr(arr, &size, arr2, size2);
    outputArr(arr, size);
    return 0;
}

void inputArr(int arr[], int *size){
    printf("\nNhap size chuoi di:");
    scanf("%d", size);
    for(int i = 0; i < *size ; i++){
        scanf("%d", &arr[i]); 
    }
}

void outputArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]); 
    }
}

void cpyArr(int arr1[], int size1, int arr2[], int *size2){
    *size2 = size1;
    for(int i = 0; i < size1; i++){
        arr2[i] = arr1[i];
    }
}

void concatArr(int arr1[], int *size1, int arr2[], int *size2){
    for(int i = 0; i < size2; i++){
        arr1[(*size1) + i] = arr2[i];
    }
    *size1 += *size2;
    *size2 = 0;
}

void *devideArr(int arr1[], int *size1, int *devidedSize){

}
