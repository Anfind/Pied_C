#include<stdio.h>
#include<math.h>

int strLen(char str[]);
void strUp(char str[]);
// Hàm nhận vào chuỗi và key, tìm và xoá các key trong chuỗi
char delByPos(char str[], int pos);
int removeKey(char str[], int key);
void removeDup(char str[]);
int string_in_string(char strM[], char strS[]);
int delSubInString(char strM[], char strS[]){
    while(splice(strM, string_in_string(strM, strS), strLen(strS), ""));
}
/*
    Splice: hàm nhận vào strM, pos, amout, strs
    trong strM xoá amout phần tử ở vị trí pos và nhét strS vào đó

*/
int splice(char strM[], int pos, int amout, char strS[]);

int main(){
    char str[100] = "Hello";
    // printf("\nLenght ne: %d", strLen(str));
    // strUp(str);
    // printf("\nChuoi moi ne %s", str);
    char str2[100] = "ahehellollo";
    // removeKey(str2, 'l');
    // removeDup(str2);
    splice(str2,2, 4,"Diep");
    printf("\nChuoi moi ne %s", str2);


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
    for( int i = pos; i <= strLen(str)-2; i++){
        str[i] = str[i+1];
    }
    str[size-1] = '\0';
    return key;
}

int removeKey(char str[], int key){
    int count = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == key){
            delByPos(str, i);
            count++;
            i--;
        }
    }
    return count;
}

void removeDup(char str[]){
    for(int i = 0; i <= strLen(str)-2; i++){
        for(int j = i + 1; str[j] != '\0'; j++){
            if(str[i] == str[j]){
                delByPos(str, j);
                j--;
            }
        }
    }
}

int splice(char strM[], int pos, int amout, char strS[]){
    if(pos < 0 || pos > strLen(strM)) return 0;
    int sizeM = strLen(strM);
    // Xóa amount ký tự từ vị trí pos
    for(int i = pos; i <= strLen(strM)-1-amout; i++){
        strM[i] = strM[i+amout];
    }
    strM[sizeM - amout] = '\0';
    
    //Đôn và nhét strS
    for(int i = strLen(strM)-1; i >= pos; i--){
        strM[i + strLen(strS)] = strM[i];
    }
    // Chèn strS vào vị trí pos
    for(int i = 0; i < strLen(strS); i++){
        strM[pos + i] = strS[i];
    }
    return 1;
}

int string_in_string(char strM[], char strS[]){
    for (int i = 0; i <= strLen(strM)-strLen(strS); i++){
        if(strM[i] == strS[0]){
            int found = 1;
            for(int j = 0; j < strLen(strS); j++){
                if(strM[i+j] != strS[j]){
                    found = 0;
                    break;
                }
            }
            if(found) return i;
        }
    }
    return -1;
}