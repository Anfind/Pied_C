#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*tinh n!*/
int main(){
    int n, p=1;
    printf("pls nhap n ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        p *= i;
    }
    printf("\nGiai thua la %d", p);
    return 0;
}