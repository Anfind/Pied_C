#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

 /*
    1. xin người dùng 3 số nguyên bất kỳ lần lượt vào 3 biến a,b,c. Tìm biến lớn nhất
    2. nhập bàn phìm a,b,c là độ dài 3 cạnh. Kiểm tra có tạo thành tam giác ko, và là tam giác gì?
    3. QuadraticEqualtion: cân bằng pt,
    nhập 3 a,b,c: tìm x => ax^2 + bx + c = 0;
        3^7 => pow(3, 7)
        căn bậc 2 của 5 là sqrt(5)
        căn bậc 7 của 5 là pow(5, 1/7*1.0)
    */

bool check(){
    int result;
    while ((result = getchar()) != '\n') {
        if (result > 57 || result < 48) {
            return false;
        }
    }
    return true;
}

int main()
{
    while(1){
        float a, b, c;
        scanf("%f %f %f", &a, &b, &c);
        bool flag = check();
//        int count = scanf("%f%f%f", &a, &b, &c);
//        printf("%d\n", count);
        if(flag){
            if (a > b && a > c) {
                printf("a lon nhat");
            }else if (b > a && b > c) {
                printf("b lon nhat");
            }else if (c > a && c > b) {
                printf("c lon nhat");
            }else if (a == b && a > c) {
                printf("a va b lon nhat");
            }else if (a == c && a > b) {
                printf("a va c lon nhat");
            }else if (c == b && c > a) {
                printf("b va c lon nhat");
            } else {
                printf("3 bien deu bang nhau");
            }
            break;
        }else{
            printf("VUI LONG NHAP SO HOP LE\n");
            while (getchar() != '\n')
            continue;
//            while (getchar() != '\n'); // Xóa dữ liệu không hợp lệ khỏi bộ đệm
        }
    }
    return 0;
}