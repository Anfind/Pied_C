#include<stdio.h>
// An code cai na`y
// Công nghệ thông tin là gì
// I: input         P: process          O: output
// Kí tự '1' và số 1 khác nhao
// Số 12 đcợc biểu diễn = '1' '2'
// Data type: kieu du lieu

/* Số chuyên     int       integer     4 bytes\
   Số thực       float                 4 bytes
   Số số thực    long float            8 bytes






*/  




int main(){
    // printf("Hello world!\n");
    //input: lưu trữ
    //  1/ xác định kiểu giá cần lưu
    char firstCharOfName = 'A'; // tạo biến firstCharOfName kiêu dữ liệu char
    // '=' la assignment
    //lưu điểm
    float point = 10;
    int age = 18;
    double mark = 7.77;
    // process
    mark += 2;
    printf("Ki tu dau tien la: %c", firstCharOfName);
    printf("\nTuoi ne %d", age);
    printf("\nDiem ne %.0f", point);
    printf("\nDiem ne %.2lf", mark);
    //in dia chi bien age
    printf("\nDia chi bien a %u",&age);
    printf("\nDia chi bien a %u",&point);
    int number = 'A';
    char a = 67;
    printf("\n%d", number);
    printf("\n%c", a ); 

    // tư duy coding
    int num_1 = 10, num_2 = 3, sum;
    sum = num_1 + num_2;
    float devide = (float) num_1 / num_2; 
    printf("\n%d + %d = %f", num_1, num_2, devide); 

    // swap

    int no1 = 2, no2 = 5;
    no1 = no1 + no2;
    no2 = no1 - no2;
    no1 = no1 - no2;
    printf("\nso 1 la: %d \nso 2 la: %d", no1, no2);
    // int temp =
    // another ways
    int temp;
    temp= no1;
    no1 = no2;
    no2 = temp;
    printf("\nNew");
    printf("\nso 1 la %d /nso 2 la %d", no1, no2);



    return 0; // cpl release that program was end
}
