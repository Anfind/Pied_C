#include<stdio.h>
#include<math.h>

int main(){
    //Input
    int ch;
    printf("Nhap ki tu: ");
    //Process
    scanf("%c", &ch);
    if( ch >= 'a' && ch <= 'z'){
        ch -= 32;
    }
    //output
    printf("\n%c", ch);
    return 0;
}