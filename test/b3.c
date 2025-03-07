#include<stdio.h>

void input(int a[], int *num);
void out(int a[], int num);
void removeDuplicates(int a[], int *num);

int main(){
    int a[100];
    int num;
    input(a, &num);
    printf("Mang truoc:\n");
    out(a, num);
    removeDuplicates(a, &num);
    printf("Mang sau\n");
    out(a, num);
    return 0;
}

void input(int a[], int *num){
    printf("Nhap so phan tu: ");
    scanf("%d", num);
    printf("Nhap cac phan tu cua mang:\n");
    for(int i = 0; i < *num; i++){
        scanf("%d", &a[i]);
    }
}

void out(int a[], int num){
    for(int i = 0; i < num; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void removeDuplicates(int a[], int *num){
    for(int i = 0; i < *num; i++){
        for(int j = i + 1; j < *num; j++){
            if(a[i] == a[j]){
                for(int k = j; k < *num - 1; k++){
                    a[k] = a[k + 1];
                }
                (*num)--;
                j--;
            }
        }
    }
}