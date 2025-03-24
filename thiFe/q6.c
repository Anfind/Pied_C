#include<stdio.h>
#include<string.h>

void q6(char str[]);
void trim(char str[]);
void delByPos(char str[], int pos);
void split(char str[], char key ,char strArr[][100], int *sizeStrArr);




int main(){
    char str[100] = "      Cuong An      Binh         Dung ";
    // printf("\n'%s", strrev(str));
    q6(str);
    return 0;
}

void delByPos(char str[], int pos){
    int size = strlen(str);
    for( int i = pos; i < strlen(str) - 1; i++){
        str[i] = str[i+1];
    }
    str[size-1] = '\0';
}

void trim(char str[]){
    for( int i = 0; i < strlen(str); i++){
        if( str[i] == ' ' && str[i+1] == ' '){
            delByPos(str, i);
            i--;
        }
    }
    if( str[0] == ' ') delByPos(str, 0);
    if( str[strlen(str)-1] == ' ') delByPos(str, strlen(str)-1);
}

void split(char str[], char key ,char strArr[][100], int *sizeStrArr){ // phai co do dai 1 chuoi: la 100
    int pos = 0;
    int sizeTmp = 0;
    char tmp[100];
    while( pos <= strlen(str)-1){
        for(int i = pos; i <= strlen(str)-1; i++){
            pos++;
            if(str[i] != key){
                tmp[sizeTmp] = str[i];
                sizeTmp ++;
            }else break;
        }
        tmp[sizeTmp] = '\0';
        strcpy(strArr[*sizeStrArr], tmp);
        (*sizeStrArr)++;
        sizeTmp = 0;
        tmp[sizeTmp] = '\0';
    }
    
}

void q6(char str[]){
    char notSort[100] = "";
    char res[100] = "";
    trim(str);
    char strArr[100][100];
    int sizeStrArr = 0;
    split(str, ' ', strArr, &sizeStrArr);
    
    for(int i = 0; i < sizeStrArr; i++){
        notSort[i] = strArr[i][0];
    }
    notSort[sizeStrArr] = '\0';

    for(int i = 0; i < strlen(notSort); i++){
        for(int j = i + 1; j < strlen(notSort); j++){
            if(notSort[i] > notSort[j]){
                char temp = notSort[i];
                notSort[i] = notSort[j]; 
                notSort[j] = temp;
            }
        }
    }

    for(int i = 0; i < strlen(notSort); i++){
        for(int j = 0; j < sizeStrArr; j++){
            if(strArr[j][0] == notSort[i]){
                strrev(strArr[j]);
                strcat(res, strArr[j]);
                strcat(res, " ");
            }
        }
    }

    strcpy(str, res);
    delByPos(res, strlen(res)-1);
    // printf("'%s'", res);
}

