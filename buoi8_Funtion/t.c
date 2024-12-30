#include<stdio.h>
// nhap so ng n, xet xem n co phai so thuoc day fibo ko, neu co in ra vi tri, ko co in ra false
int main(){
    int n, count = 0;
    scanf("%d", &n);
    int pre = 1, fibo = n, cur = 0;
    for(int i = 2; i <= n+2; i++){
        count++;
        fibo = pre + cur;
        cur = pre;
        pre = fibo;
        if(fibo == n){
            printf("\n%c%c%c%c%c%c", (n==1)*49, 32*(n==1), 97*(n==1), 110*(n==1), 100*(n==1), 32*(n==1));
            printf("%d", count+1);
            return 0;
        }
    }
    printf("\nFlase");
    return 0;
}
