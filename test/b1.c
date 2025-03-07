#include<stdio.h>

void input(int a[], int *num);
void out(int a[], int num);
void slide(int arrM[], int *sizeM, int arrS[], int *sizeS, int *pos);

int main(){
    int arrM[100] = {0};
    int arrS[100] = {0};
    int sizeM = 0, sizeS = 0;
    int pos = -1;
    input(arrM,&sizeM);
    input(arrS,&sizeS);
    out(arrM, sizeM);
    out(arrS, sizeS);
    slide(arrM, &sizeM, arrS, &sizeS, &pos);
    out(arrM, sizeM);
    out(arrS, sizeS);
    return 0;
}

void input(int a[], int *num){
    printf("\nNhap n di: ");
    scanf("%d", num);
    printf("\nNhap tung phan tu: ");
    for( int i = 0; i < *num; i++){
        scanf("%d", &a[i]);
    }
}

void out(int a[], int num){
    for( int i = 0; i < num; i++){
        printf("%  d", a[i]);
    }
    printf("\n");
}

void slide(int arrM[], int *sizeM, int arrS[], int *sizeS, int *pos){
    printf("Nhap pos dii: ");
    scanf("%d", pos);
    if(*pos >= 0 && *pos < *sizeM){
        int newSizeM = *pos;
        for(int i = *pos; i < *sizeM; i++){
            arrS[*sizeS] = arrM[i];
            (*sizeS)++;
        }
        *sizeM = newSizeM;
    } else {
        printf("Vi tri khong hop le\n");
    }
}