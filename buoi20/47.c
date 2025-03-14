#include<stdio.h>
#include<math.h>
#include<string.h>

int strLen(char str[]);
char delByPos(char str[], int pos);
void trim(char str[]);
void validName(char str[]);
void reversWordInStr(char str[]);

int main(){
    char str[100] = "   nguYen        Thai     aN   ";
    // trim(str);
    validName(str);
    reversWordInStr(str);
    printf(" '%s' ", str);
    return 0;
}

int strLen(char str[]){
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }
    return len;
}

char delByPos(char str[], int pos){
    if(pos < 0 || pos >= strLen(str)) return '\0';
    int key = str[pos];// ky tu sap xoa
    int size = strLen(str); // vi tri \0
    for( int i = pos; i <= strLen(str)-2; i++){
        str[i] = str[i+1];
    }
    str[size-1] = '\0';
    return key;
}

void trim(char str[]){
    for( int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' ' && str[i+1] == ' '){
            delByPos(str, i);
            i--;
        }
    }
    if(str[0] == ' ') delByPos(str, 0);
    if(str[strLen(str)-1] == ' ') delByPos(str, strLen(str)-1);
}

void validName(char str[]){
    trim(str);
    strlwr(str);
    for( int i = 0; str[i] != '\0'; i++){
        if(str[i] == ' ' && str[i+1] >= 'a' && str[i+1] <= 'z'){
            str[i+1] -= 32;
        }
    }
    if( str[0] >= 'a' && str[0] <= 'z') str[0] -= 32;

}
// lỗi ( 1 for trong while cũng đc)
void reversWordInStr(char str[]){
    trim(str);
    strrev(str);
    char tmp[100] = "";
    int sizeTpm = 0;
    char res[100] = "";
    for(int i = 0; i <= strlen(str); i++){
        if( str[i] != ' '){
            tmp[sizeTpm] = str[i];
            sizeTpm++;
        }else{
            tmp[sizeTpm] = '\0';
            strrev(tmp);
            strcat(res, tmp);
            strcat(res, " ");
            int sizeTpm = 0;
            tmp[sizeTpm] = '\0';
        }
    }
    for(int i = 0; str[i] != '\0'; i++){
        str[i] = tmp[i];
    }
}