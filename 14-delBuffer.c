#include<stdio.h>
#include<math.h>

int main(){
    int age;
    char name;
    printf("Nhap age ");
    scanf("%d", &age);
    fflush(stdin);
    printf("\nNhap ten ");
    scanf("%c", &name);
//
    printf("\nAge la %d, ten la %c", age, name);


    return 0;
}