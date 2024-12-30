#include <stdio.h>

int main() {

    // int n, cur = 10;

    // printf("Nhap N: ");
    // scanf("%d", &n);

    // while(n > 0) {
    //     int temp = n % 10;
    //     if(temp >= cur) {
    //         printf("\nno");
    //         return 1;
    //     }
    //     cur = temp;
    //     n /= 10;
    // }  
    // printf("\noke");


    int height, count = 0;
    scanf("%d", &height);
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < 2 * height - 1; x++) {
            if (x >= height - y - 1 && x <= height + y - 1 && (x < height || --count) && (x >= height || ++count)) {
                printf("%d", count);
                continue;
            }
            printf("#");
        }
        printf("\n");
        count = 0;
    }

    return 999;
}