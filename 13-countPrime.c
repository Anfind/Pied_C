#include<stdio.h>
#include<math.h>
//Bai 13 countPrime
int main(){
    int start, end, flag=1;
    printf("Plsss nhap start ");
    scanf("%d", &start);
    printf("\nPlsss nhap end ");
    scanf("%d", &end);
    for(int num = start; num <= end; num++){
        if (num >= 2){
            for(int i = 2; i < sqrt(num); i++){
                if( num % i == 0){
                    flag = 0;
                    break;
                }
            }
            if( flag == 1){
                printf("%3d", num);
            }
            flag = 1;
        }
    }
    


    return 0;
}