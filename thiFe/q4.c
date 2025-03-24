#include<stdio.h>
#include<string.h>


int q4(char str[], char key);
int strlenn(char str[]);
int main(){
    char str[100] = "Chao nmg";
    // printf("'%d'", q4(str, 'h'));
    // printf("'%s'", str);
    // printf("\nLa: %d", strlenn(str));
    return 0;
}

// int strlenn(char str[]){
//     int len = 0;
//     for(int i = 0; str[i] != NULL; i++){
//         len++;
//     }
//     return len;
// }


int q4(char str[], char key){
    for( int i = 0; i < strlen(str); i++){
        if( key == str[i]){
            return i;
        }
    }
    return -1;
}