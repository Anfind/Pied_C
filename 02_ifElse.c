#include<stdio.h>

int main(){

    /*
    Conditional clause: 
        if( conditioanl clause){
            do sth
        }else{
            do something
            
    */
    int car = 8;
    printf("\nSai gon");
    // gặp biển báo
    if(car != 7){
        printf("\nPrenn");
    }else if( car == 7) {
        printf("\nSacom");
    }else printf("\nMimosa");
    //cuoi
    printf("\nDa lat");

    // ++ truoc va sau
    //logical operator: 
    int age = 18;
    int money = 2000000; 
    if( age >= 18){
        if( money >= 2000000){
            printf("\nWelcome");
        }
    }else printf("\nCut");


    // && tim menh de false, gap false -> all false, tim k dc flase -> all true
    //  & chay cho = het, roi ms ket luan
    int a = 12;
    int b = 5;
    if(a == 10 & b++ > 2){
        printf("\nTrue a = %d va b = %d", a, b);
    }else{
        printf("\nFalse a = %d va b = %d", a, b);

    }
    return 0;
}