#include<stdio.h>

int main(){
    int start, end, cout=0, flag = 1;
    printf("Plsss nhap start ");
    scanf("%d", &start);
    printf("\nPlsss nhap end ");
    scanf("%d", &end);
    for(int num = start; num <= end; num++){
        if (num >= 2){
            for(int i = 2; i < num; i++){
                if( num % i == 0){
                    flag = 0;
                    break;
                }
            }
            if( flag == 1){
                cout++;
            }
            flag = 1;
        }
    }
    printf("\n%d", cout);



    return 0;
}