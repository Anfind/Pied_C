#include<stdio.h>
// co in ko out
void toUperCase(char cha);

int main(){
    int ch;
    scanf("%c", &ch);
    toUperCase(ch);// argument: doi so
    return 0;
}

void toUperCase(char cha){ // cha parameter: tham so
    if( cha >= 'a' && cha <= 'z'){
        cha -= ' ';
    }
    printf("%c", cha);
}
