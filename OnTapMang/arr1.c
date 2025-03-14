#include<stdio.h>
#include<math.h>

void inputArr(int arr[], int *size);
void outputArr(int arr[], int size);
void cpyArr(int arr1[], int size1, int arr2[], int *size2);
void concatArr(int arr1[], int *size1, int arr2[], int *size2);
void devideArr(int arr1[], int *size1, int pos, int arr2[], int *size2);
void reversArr(int arr[], int size);
int mostApearElement(int arr[], int size);
int findElementInArr(int arr[], int size, int key); //pos: position
int delByPos(int arr[], int *size, int pos);
void insertByPos(int arr[], int *size, int pos, int key);
int delAllKey(int arr[], int *size, int key);
int delSameElement(int arr[], int *size);
void insertArrByPos(int arr[], int *size, int arrSub[], int *sizeSub, int pos);
void slice(int arr[], int *size, int pos, int amount);
int delAllSubArrInArr(int arr[], int *size, int arrSub[], int sizeSub);
int main(){
    int arr[100] = {0};
    int arr2[100] = {0};
    int size = 0, size2 = 0;
    int devidedSize = 0;
    inputArr(arr, &size);
    // outputArr(arr, size);
    // cpyArr(arr, size, arr2, &size2);
    // inputArr(arr2, &size2);
    // concatArr(arr, &size, arr2, size2);
    // outputArr(arr, size);
    // outputArr(arr, size);
    // devideArr(arr, &size, 3, arr2, &size2);
    // outputArr(arr2, size2);
    // printf(" '%d' ", mostApearElement(arr, size));
    // reversArr(arr, size);
    // outputArr(arr, size);
    delAllKey(arr, &size, 3);
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
    printf("\n");
}

void cpyArr(int arr1[], int size1, int arr2[], int *size2){
    *size2 = size1;
    for(int i = 0; i < size1; i++){
        arr2[i] = arr1[i];
    }
}

void concatArr(int arr1[], int *size1, int arr2[], int *size2){
    for(int i = 0; i < *size2; i++){
        arr1[(*size1) + i] = arr2[i];
    }
    *size1 += *size2;
    *size2 = 0;
}

void devideArr(int arr1[], int *size1, int pos, int arr2[], int *size2){
    *size2 = 0;
    for( int i = pos; i < *size1; i++){
        arr2[*size2] = arr1[i];
        (*size2) ++;
    }
    *size1 = pos;
}

void reversArr(int arr[], int size){
    for( int i = 0; i <= (size-1)/2; i++){
        int temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }   
}

int mostApearElement(int arr[], int size){
    int arrStore[100] = {0};
    int max0 = 0;
    int max1 = 0;
    int element = 0;
    for(int i = 0; i < size; i++){
        if( arr[i] > max0) max0 = arr[i];
        if( arrStore[arr[i]] == 0){
            arrStore[arr[i]] =  1;
        }else{
            arrStore[arr[i]] ++; 
        }
    }
    
    for( int i = 1; i <= max0; i++){
        if( arrStore[i] > max1){
            max1 = arrStore[i];
            element = i;
        }
    }

    return element;
}

int findElementInArr(int arr[], int size, int key){ //pos: positio

    for(int i = 0; i < size; i++){
        if(key == arr[i]) return i;
    }
} 

int delByPos(int arr[], int *size, int pos){
    if(pos < *size && pos >= 0){
        int key = arr[pos];
        for( int i = pos; i < *size-1; i++){
            arr[i] = arr[i+1];
        }
        (*size)--;
        return key;
    }else return -1;
}

void insertByPos(int arr[], int *size, int pos, int key){
    if ( pos >= *size || pos < 0) return;
    for( int i  = *size - 1; i >= pos; i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = key;
    (*size);
}

int delAllKey(int arr[], int *size, int key){
    int c = 0;
    for(int i = 0; i < *size; i++){
        if( arr[i] == key){
            delByPos(arr, size,i);
            i--;
            c++;
        }
    }
    return c;
}

int delSameElement(int arr[], int *size){
    int i = 0;
    int c = 0;
    while( i < *size -1){
        for(int j = i + 1; j < *size; j++){
            if( arr[i] == arr[j]){
                delByPos(arr, size, j);
                j--;
                c++;
            }
        }
        i++;
    }
    return c;
}

void insertArrByPos(int arr[], int *size, int arrSub[], int *sizeSub, int pos){
    for(int i = 0; i < *sizeSub; i++){
        insertByPos(arr, size, pos + i, arrSub[i]);
    }
}

void slice(int arr[], int *size, int pos, int amount){
    for(int i = 0; i < amount; i++ ){
        delByPos(arr, size, pos);
    }
}

int delAllSubArrInArr(int arr[], int *size, int arrSub[], int sizeSub){
    int c = 0;
    int flag = 0;
    for(int i = 0; i < *size; i++){
        flag = 0;
        if(arr[i] == arrSub[0]){
            flag = 1;
            for(int j = 1; j < sizeSub; j++){
                if(arr[i+j] != arrSub[j]){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1){
                slice(arr, size, i, sizeSub);
                c++;
                i--;
            }
        }
    }
    return c;
}