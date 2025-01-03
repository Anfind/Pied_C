#include <stdio.h>
int checkEven();
int main()
{
    printf("\n%d", checkEven());
    return 0;
}

int checkEven(){
    int n;
    scanf("%d", &n);
    return (n%2==0)*1;
}