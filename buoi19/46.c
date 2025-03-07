#include<stdio.h>
#include<math.h>

int strLen(char str[]);
void strUp(char str[]);
// Hàm nhận vào chuỗi và key, tìm và xoá các key trong chuỗi
char delByPos(char str[], int pos);
int removeKey(char str[], int key);

int main(){
    char str[100] = "Hello";
    printf("\nLenght ne: %d", strLen(str));
    strUp(str);
    printf("\nChuoi moi ne %s", str);
    char str2[100];
    gets(str2);
    

    return 0;
}

int strLen(char str[]){
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }
    return len;
}

void strUp(char str[]){
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

char delByPos(char str[], int pos){
    if(pos < 0 || pos >= strLen(str)) return '\0';
    int key = str[pos];// ky tu sap xoa
    int size = strLen(str); // vi tri \0
    for( int i = pos; i <= strLen(str)-2, i++){
        str[i] = str[i+1];
    }
    str[size-1] = '\0';
    return key;
}

int removeKey(char str[], int key){
    int count = 0;
    for(int i = 0; i != '\0'; i++){
        if(str[i] == key){
            delByPos(str, i);
            count++;
            i--;
        }
    }
    return count;
}