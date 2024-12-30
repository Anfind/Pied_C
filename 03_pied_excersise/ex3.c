#include <stdio.h>
#include <math.h>
// B3: giải pt bậc 2

int main()
{
    double a, b, c, delta;
    scanf("%lf %lf %lf", &a, &b, &c);
    delta = b * b - 4 * a * c;
    if (delta == 0)
    {
        printf("Phuong trinh co 2 nghiem\nx1 %lf\nx2 %lf", -b / (2 * a), -b / (2 * a));
    }
    else if (delta > 0)
    {
        printf("Phuong trinh co 2 nghiem\nx1 %lf\nx2 %lf", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
    }
    else
        printf("Phuong trinh vo nghiem");

    return 0;
}