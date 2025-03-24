#include<stdio.h>
// do while vs while
int main(){
    int a, check, temp;
    printf("\nNhap 1 so nguyen a: ");
    // way 1
    do
    {
        check = scanf("%d", &a);
        do
        {
            temp = getchar();
            if (temp == '.')
            {
                if (getchar() == '0')
                {
                    check = 1;
                    temp = '\n';
                }
                else check = 0;
            }
            else if (temp != '\n') check = 0;

        } while (temp != '\n');
        if (check < 1)
            printf("\nSO NGUYEN, NHAP LAI:");
    } while (check < 1);


    /// way 2
    

    

    return 0;

}