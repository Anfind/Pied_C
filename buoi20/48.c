#include<stdio.h>
#include<math.h>
#include<string.h>

void split(char str[], char key ,char strArr[][100], int *sizeStrArr);
void join(char strArr[][100], int sizeStrArr ,char str[], char key);

int main(){
    char strArr[100][100];
    int sizeStrArr = 0;
    char str[100] = "Cin chao Thai An";
    char str2[100] = "";


    split(str,' ', strArr, &sizeStrArr);
    for(int i = 0; i < sizeStrArr; i++){
        printf("\n'%s'", strArr[i]);
    }
    join(strArr, sizeStrArr, str2, '#');
    printf("\n%s", str2);
    return 0;
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

void join(char strArr[][100], int sizeStrArr ,char str[], char key){
    str[0] = '\0';
    char tmp[2] = " ";
    tmp[0] = key;
    for( int i = 0; i < sizeStrArr; i++){
        strcat(str, strArr[i]);
        strcat(str, tmp);
    }
}