#include<stdio.h>

void sum(int start, int end);
int main(){
    int start, end;
    scanf("%d", &start);
    scanf("%d", &end);
    sum(start, end);
    int n;
}

void sum(int start, int end){
    int sum=0;
    for(int i = start; i <= end; i++){
        sum += i;
    }
    printf("\nTong la: %d", sum);
}
