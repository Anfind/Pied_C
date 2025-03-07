// Transfer các kí tự alphabet thành viết thường
#include<stdio.h>
// #include<string.h>

void strLWR(char str[]) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}

int main(){
    char str[100];
    printf("Nhap chuoi: ");
    gets(str);
    strLWR(str);
    printf("Chuoi sau khi chuyen thanh chu thuong: %s", str);
    
    return 0;
}