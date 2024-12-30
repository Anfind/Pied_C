#include<stdio.h>
#include<math.h>
//
int main(){
    int s, m=0, h=0;
    scanf("%d", &s);
    m = s/60;
    s = s % 60;
    h = m/60;
    m = m%60;
    printf("%02d:%02d:%02d",h, m, s);
    return 0;
}