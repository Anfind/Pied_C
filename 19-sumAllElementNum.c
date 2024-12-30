#include<stdio.h>
#include<math.h>
#include<stdlib.h>
// tim day con tang co tong lon nhat trong so
int main(){
    int num, temp = 0, sau= 9999999, final= 0, count = 0, sum = 0;
    scanf("%d", &num);
    while( num > 0){
        temp = num % 10; 
        if(sau >= temp){
            count ++,
            printf("%d", temp);
            sau = temp;
            if( final == 0){
                final += temp;
                count --;
            }else{
                final = final + temp*pow(10,count);
            }
            sum += temp;
        }else{
            
        }
        num /= 10;
    }
    printf("\n%d", final);
    return 0;
}