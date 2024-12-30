#include<stdio.h>
#include<math.h>
int main() {
    float a, b, c, delta;
    printf("Lm on nhap a gium di: ");
    scanf("%d", &a);
    printf("\nLm on nhap b gium di: ");
    scanf("%d", &b);
    printf("\nLm on nhap c gium di: ");
    scanf("%d", &c);
    delta = b * b - 4 * a * c;
    if(a == 0){
        if(b == 0){
            if(c == 0){
                printf("\nPt vo so nghiem");
            }else printf("\nPt vo nghiem");
        }else printf("\nPt co 1 nghiem la: %f", -c/b);
        
    }else{
        if (delta == 0){
        printf("Phuong trinh co 2 nghiem\nx1 %lf\nx2 %lf", -b / (2 * a), -b / (2 * a));
    }
    else if (delta > 0){
        printf("Phuong trinh co 2 nghiem\nx1 %lf\nx2 %lf", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
    }
    else
        printf("Phuong trinh vo nghiem");
    }
    
    return 0;
}