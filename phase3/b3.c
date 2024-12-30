/*
3. nhập vào n, kiểm tra xem tổng các chữ số của n có thạo thành 1 số nguyên tố không"
*/
#include<stdio.h>
#include<math.h>

int main(){
    int n, sum = 0;
    scanf("%d", &n);
    for(; n > 0;sum += n % 10, n /= 10);
    for(int i = 2; i <= sqrt(sum); i++){
        if(!(sum % i)){
            return printf("\n Ko phai so ng to");
        }
    }
    printf("\n La so ng to");
    return 0;
}