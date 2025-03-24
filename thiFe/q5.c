#include<stdio.h>
#include<string.h>

void q5(char str[]);
void delByPos(char str[], int pos);

int main(){
    char str[100] = " Chao    af   afa ";
    q5(str);
    printf("'%s'", str);
    return 0;
}

void q5(char str[]){
    for( int i = 0; i < strlen(str); i++){
        if( str[i] == ' ' && str[i+1] == ' '){
            delByPos(str, i);
            i--;
        }
    }
    if( str[0] == ' ') delByPos(str, 0);
    if( str[strlen(str)-1] == ' ') delByPos(str, strlen(str)-1);
}

void delByPos(char str[], int pos){
    int size = strlen(str);
    for( int i = pos; i < strlen(str) - 1; i++){
        str[i] = str[i+1];
    }
    str[size-1] = '\0';
}