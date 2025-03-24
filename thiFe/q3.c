#include<stdio.h>
#include<string.h>

void q3(int arr[], int *size, int key);
void delByPos(int arr[], int *size, int pos);

int main(){
    return 0;
}

void q3(int arr[], int *size, int key){
    for( int i = 0; i < *size; i++){
        if( key == arr[i]){
            delByPos(arr, size, i);
        }
    }   
}

void delByPos(int arr[], int *size, int pos){
    for( int i = pos; i < (*size) - 1; i++){
        arr[i] = arr[i+1];
    }
    (*size)--;
}