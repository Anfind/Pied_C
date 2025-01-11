#include<stdio.h>
void fibo(int num){
    int f = num, tr = 1, s=0;
    if( num >=1 ){
        for(int i = 2; i <= num; i++){
            f = tr + s;
            s = tr;
            tr = f;
        }
        printf("\nSo do la: %d",f);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    fibo(n);
    return 0;
}