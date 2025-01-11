#include<stdio.h>

void inputArray(int a[],int *num);
void outputArray(int a[],int num);

int main(){
    int n;
    int a[10];
    inputArray(a,&n);
    outputArray(a,n);
    printf("%2d",n );
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
