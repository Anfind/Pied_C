#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Inductive result
nhap vao so ng duong n, tinh ket qua cua 1 mu n den n mu n*/
int main(){
    int n, sum=0, res= 1;
    printf("Pls nhap n ");
    scanf("%d", &n);
    for( int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            res *= i;
        }
        sum += res;
        res =1;
        // sum += pow(i,n);
    }
    printf("\n N la %d", sum);

    return 0;
}