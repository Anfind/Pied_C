#include<stdio.h>
// ko in co out
char toUperCaseV3(){
    char ch;
    scanf("%c", &ch);
    fflush(stdin);
    if( ch >= 'a' && ch <= 'z'){
        ch -= ' ';
    }
    return ch;
}
int main(){
    printf("%c", toUperCaseV3());
    return 0;
}