// B1: ép ng dùng nhập 3 số ngueyen a b c, biến nào có giá trị lớn nhất
#include <stdio.h>
#include <math.h>
int a, b, c, check, temp;
// temp >= 33 && temp <= 47 || temp >= 58 && temp <= 126         luu do
void rule()
{
    printf("\nNhap 3 so nguyen a, b, c: ");
    do
    {
        check = scanf("%d %d %d", &a, &b, &c);
        do
        {
            temp = getchar();
            if (temp == '.')
            {
                // printf("\n123");
                if (getchar() == '0')
                {
                    // printf("\n456");
                    check = 3;
                    temp = '\n';
                }
                else
                    check = 0;
            }
            else if (temp != '\n')
                check = 0;

        } while (temp != '\n');
        if (check < 3)
            printf("\n3 SO NGUYEN, NHAP LAI:");
    } while (check < 3);
}

int main()
{
    rule();// nhap 3 so
    int max = ((a + b + abs(a - b)) / 2 + c + abs((a + b + abs(a - b)) / 2 - c)) / 2;
    if (max == a)
    {
        max = 97;
    }
    else if (max == b)
    {
        max = 98;
    }
    else if (max == c)
    {
        max = 99;
    }
    else
    {
        printf("\n3 so bang nhau");
        return 0;
    }
    printf("\nSo lon nhat la: %c", max);
    return 0;
}