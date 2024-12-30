//B2: nhật vào 3 biến a b c, 3 biến này đc xe là độ dài 3 
//cạnh trong ta giác, hỏi abc tạo thành ta giác gì

#include<stdio.h>

int main() {
    int a, b, c;
    printf("Plzzzz, nhap a b c di: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    if (a + b < c || a + c < b || b + c < a) {
        printf("\nKhong phai ta giac");
    }
    else if (a == b || a == c || c == b) {
        if (a == b && a == c) {
            printf("\nTa giac deu");
        }
        else {
            if (a == b) {
                printf("\nTam giac can a, b");
            }
            else if (b == c) {
                printf("\nTam giac can b, c");
            }
            else printf("\nTam giac can a, c");
        }
    }
    else if (c * c == a * a + b * b) {
        printf("\nTam giac vuong a, b");
    }
    else if (a * a == b * b + c * c) {
        printf("\nTam giac vuong b, c");
    }
    else if (b * b == a * a + c * c) {
        printf("\nTam giac vuong a, c");
    }
    else printf("\nTam giac thuong");
    return 0;
}