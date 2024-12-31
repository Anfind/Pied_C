#include<stdio.h>
// co in co out
char toUperCaseV4(char cha);
int main(){
    char ch;
    scanf("%c", &ch);
    fflush(stdin);
    printf("%c", toUperCaseV4(ch));
    return 0;
}

char toUperCaseV4(char cha){
    if(cha >= 'a' && cha <= 'z'){
        cha -= ' ';
    }
    return cha;
}
