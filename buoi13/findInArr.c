#include<stdio.h>

void inputArray(int a[],int *num);
void outputArray(int a[],int num);
void findKeyInArr(int arr[], int n, int key, int arrRestore[], int *sizeR );    

int main(){
    int n;
    int a[10];
    int arrStore[100];
    int sizeR = 0;
    inputArray(a,&n);
    printf("Nhap Key: ");
    int key = 0;
    scanf("%d", &key);
    printf("\nLaaaaa: ");
    findKeyInArr(a, n, key, arrStore, &sizeR);
    if ( arrStore == 0){
        printf("\nNot exist");
    }else{
        printf("\nSo vi tri la: ");
        outputArray(arrStore, sizeR);
    }
    
    outputArray(arrStore, sizeR);
    // outputArray(a,n);
    // printf("%2d",n );
}

void findKeyInArr(int arr[], int n, int key, int arrRestore[], int *sizeR ){
    *sizeR = 0;
    for( int i = 0; i < n; i++){
        if( arr[i] == key){
            arrRestore[*sizeR] = i;
            (*sizeR)++;
        }
    }

}

void inputArray(int a[],int *num){
    printf("Nhap n di :");
    scanf("%d", num);
    for( int i = 0; i < *num; i++){
        scanf("%d",&a[i]);
    }
}

void outputArray(int a[],int num){
    for( int i = 0; i < num; i++){
        printf("%3d", a[i]);
    }
}
