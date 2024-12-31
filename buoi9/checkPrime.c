#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d", &n);
    if( n >= 2){
        for (int i = 2; i <= sqrt(n); i++){
            printf("\n%d ko phai so ng to", n);
            return 0;
        }
    }
    printf("\n%d La so ng to", n);
    return 0;
}