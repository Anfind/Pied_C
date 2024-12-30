#include<stdio.h>

int main(){
    int prev = 0;
    int result = 1;
    int n;
    int i = 0;
    int current = 1;
    scanf("%d", &n);
    while(result <= n){
        result = prev + current;
        prev = current;
        current = result;
        i++;
        if(result == n){
            printf("so ban nhap la so finbon thu %d", i);
            return 0;
        }
    }
    printf("so ban nhap deo co");
    return 0;
}