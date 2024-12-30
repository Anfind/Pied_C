// lưu 1 số ng bất kì, kt chẳn lẻ
#include<stdio.h>
int main(){
    int nu = 8;
    printf("\nPlz, input a number");
    scanf("%d", &nu);
    if(nu%2){
        printf("\n%d So le", nu);
    }else printf("\n%d So chan", nu);
}


