#include<stdio.h>

void inputArray(int a[], int* num);
void outputArray(int a[], int num);
void concatArrayV1(int arr1[], int size1,
    int arr2[], int size2,
    int arr3[], int* size3);
void reverseArrayV1( int arr[], int size);
void reverseArrayV2( int arr[], int size); // swap nữa đầu với nữa sau


int main() {
    int arr1[100] = {2, 4, 6};
    int arr2[100] = {1, 3, 5};
    int arr3[100] = {2, 2, 2, 2, 2, 2, 2, 2, 2};

    int size1 = 3; // Số phần tử thực tế trong arr1
    int size2 = 3; // Số phần tử thực tế trong arr2
    int size3 = 0;

    outputArray(arr1, size1);
    outputArray(arr2, size2);
    outputArray(arr3, size3);

    concatArrayV1(arr1, size1, arr2, size2, arr3, &size3);
    outputArray(arr1, size1);
    outputArray(arr2, size2);
    outputArray(arr3, size3);

    printf("\n");
    reverseArrayV1(arr1, size1);
    outputArray(arr1, size1);

    printf("\n");
    reverseArrayV2(arr2, size2);
    outputArray(arr2, size2);


    


    return 0;
}

void reverseArrayV2( int arr[], int size){
    int limit = size/2 -1;
    for( int i = 0; i <= limit; i++){
        int tmp = arr[i];
        arr[i] = arr[size - 1  - i];
        arr[size - 1 - i] = tmp;
    }
}

void reverseArrayV1( int arr[], int size){
    // nhét tạm vô đảo
    int arrTmp[100];
    int sizeTmp = 0;
    for( int i = size -1; i >= 0; i--){
        arrTmp[sizeTmp] = arr[i];
        sizeTmp++;
    }
    //chép đối xứng
    for( int i = 0; i <= sizeTmp - 1; i++){
        arr[i] = arrTmp[i];
    }
}

void concatArrayV1(int arr1[], int size1,
    int arr2[], int size2,
    int arr3[], int *size3){
        *size3 = 0;
        // Nhét arr1 vào arr3
        for(int i = 0; i < size1; i++){
            arr3[*size3] = arr1[i];
            (*size3)++;
        }
        // Nhét arr2 vào arr3
        for(int i = 0; i < size2; i++){
            arr3[*size3] = arr2[i];
            (*size3)++;
        }
    }

void inputArray(int a[], int* num) {
    printf("Nhap n di :");
    scanf("%d", num);
    for (int i = 0; i < *num; i++) {
        scanf("%d", &a[i]);
    }
}

void outputArray(int a[], int num) {
    for (int i = 0; i < num; i++) {
        printf("%3d", a[i]);
    }
    printf("\n");
}