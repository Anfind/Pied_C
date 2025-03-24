#include<stdio.h>
#include<string.h>

void q2(int arr[], int *size, int pos, int amount);
void delByPos(int arr[], int *size, int pos);

int main(){
    int arr[100] = {1, 2, 3, 4};
    // delByPos[arr, ];
    return 0;
}

void q2(int arr[], int *size, int pos, int amount){
    if( pos < 0 || pos >= *size) return;
    for ( int i = 1; i <= amount; i++){
        delByPos(arr, size, pos);
    }
}

void delByPos(int arr[], int *size, int pos){
    for( int i = pos; i < *size - 1; i++){
        arr[i] = arr[i+1];
    }
    (*size)--;
}