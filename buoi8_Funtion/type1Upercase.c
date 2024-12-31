#include<stdio.h>
#include<math.h>
// ko in ko out
void toUpperCaseV1();

int main(){
    toUpperCaseV1();
    return 0;
}

void toUpperCaseV1(){
    char ch;
    scanf("%c", &ch);
    fflush(stdin);
    if( ch >= 'a' && ch <= 'z'){
        ch -= ' ';
    }
    printf("\n%c", ch);
}