#include<stdio.h>

void input(int a[], int *num);
void out(int a[], int num);
void find(int arrM[], int sizeM, int arrS[], int sizeS);

int main(){
    int arrM[100];
    int arrS[100];
    int sizeM, sizeS;
    printf("Nhap mang arrM:\n");
    input(arrM, &sizeM);
    printf("Nhap mang arrS:\n");
    input(arrS, &sizeS);
    printf("Mang arrM:\n");
    out(arrM, sizeM);
    printf("Mang arrS:\n");
    out(arrS, sizeS);
    find(arrM, sizeM, arrS, sizeS);
    return 0;
}

void input(int a[], int *num){
    printf("Nhap so phan tu: ");
    scanf("%d", num);
    printf("Nhap cac phan tu cua manggg:\n");
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

void find(int arrM[], int sizeM, int arrS[], int sizeS){
    int flag = 0;
    for(int i = 0; i <= sizeM - sizeS; i++){
        int j;
        for(j = 0; j < sizeS; j++){
            if(arrM[i + j] != arrS[j]){
                break;
            }
        }
        if(j == sizeS){
            printf("Mang S xuat hien trong mang M tai vi tri %d\n", i);
            // break;
            flag = 1;
        }
    }
    if(!flag){
        printf("Mang S xuat hien trong mang M tai vi tri -1\n");
    }
}