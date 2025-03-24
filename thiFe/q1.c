#include<stdio.h>
#include<string.h>

float q1(int num);

// int main(){
//     int num;
//     scanf("%d", &num);
//     printf("\n'%f'", q1(num));
//     return 0;
// }
float q1(int num){
    float sum = 0;
    for( float i = 1; i <= num; i++){
        sum += 1.0/i;
    }
    return sum;
}