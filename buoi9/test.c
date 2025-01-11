#include<stdio.h>
#include<math.h>
// prime vo cung

int checkPrime(int number){
    for(int i = 2; i <= sqrt(number); i++){
        if( number % i == 0){
            return 0;
        }
    }
    return 1;
}
int sum(int number){
    int sum2=0;
    for(; number > 0; sum2 += number%10, number /= 10);
    return sum2;
}
int main(){
    int start, end;
    scanf("%d", &start);
    scanf("%d", &end);
    for(int i = start; i <= end; i++){
        int flag = 1;
        int it = i;
        do{
            if( checkPrime(i)){
                i = sum(i);
                flag = 1;
            }else{ 
                flag = 0;
                break;
            }
            if(i < 10){
                if(checkPrime(i)){
                    flag = 1;
                    break;
                }else{
                    flag = 0;
                    break;
                }
            }
        }while( i >= 10 );
        if(flag == 1) printf("\n%d", it);
        i = it;
    }
}