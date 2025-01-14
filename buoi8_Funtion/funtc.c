#include<stdio.h>
#include<math.h>

int checkInput(){
    float n;
    char ch;
    printf("Nhap n la so nguyen: ");
    do{
        scanf("%f", &n);
        scanf("%c", &ch);
        fflush(stdin);
        if(ch != 10 || n != (int)n ){
            printf("\nNhap laiii: ");
            // ch = 'a';
        }
    }while( ch != 10);
    return n;
}

int computeFibo(int n){ //index n
    int pre = 0, fibo = n, cur = 1;
    if(n <= 0) return 0;
    for(int i = 2; i <= n; i++){
        fibo = pre + cur;
        pre = cur;
        cur = fibo;
    }
    return fibo;
}



int main(){
    int n;
    printf("%d", checkInput());
    // int n = checkInput();
    // printf("\n%d", n);
    // scanf("%d",&n);
    // printf("%d", computeFibo(n));
    return 0;
}