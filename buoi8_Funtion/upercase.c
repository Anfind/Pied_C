#include<stdio.h>
#include<math.h>

int main(){
    int ch;
    //Input
    printf("Nhap ki tu: ");
    scanf("%c", &ch);
    if( ch >= 'a' && ch <= 'z'){
        ch -= 32;
    }
    printf("\n%c", ch);
    return 0;
}