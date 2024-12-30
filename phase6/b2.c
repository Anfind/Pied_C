/*
2.Cho trước n là số tự nhiên. Bạn hãy viết chương trình để in ra tổng các số có chữ số cuối cùng là 5 trong khoảng từ 1 đến n
F(n) = 5 + 15 + 25 + … + n
vd: n = 30 => 5+15+25 = 45
vd: n = 40 => 5 + 15 + 25 + 35 = 80
*/
#include<stdio.h>
#include<math.h>
    
int main() {
    int n, un = 0;
    scanf("%d", &n);
    if (n >= 5) {
        if ((n / 5) % 2 != 0) {
            un = (n / 5) * 5;
        }
        else {
            un = ((n / 5) - 1) * 5;
        }
        printf("\n%d", ((((un - 5) / 10) + 1) * (5 + un)) / 2);
    }
    return 0;
}
/*
scanf("%d", &n);
    if( n >= 5){
        for( int i = 5; i <= n; i += 10){
            sum += i;
        }
    }
    printf("%d", sum);
*/