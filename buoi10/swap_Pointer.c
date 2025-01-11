#include<stdio.h>
#include<math.h>
void swap(int *aa, int *bb);

int main(){
    int a, b, c = 10;
    int *cc = &c;
    // scanf("%d%d", &a, &b);
    swap(&a, &b);
    // printf("%d  %d", a, b);
    int d;
    
    printf("%d %u", *cc, &c);
    return 0;
}

void swap(int *aa, int *bb){
    int temp = *aa;
    *aa = *bb;
    *bb = temp;
}
