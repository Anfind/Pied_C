/*4. Viết chương trình tính kết quả biểu thức S= 1+1/2^3+1/3^3+...+1/n3 */
#include<stdio.h>
#include<math.h>

int main(){
    int n ;
    float sum = 0.0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        sum += 1/pow(i,3);
    }    
    printf("\n%f", sum);
    return 0;
}