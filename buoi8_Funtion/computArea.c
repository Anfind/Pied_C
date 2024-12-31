#include<stdio.h>
void computeArea1();
void computeArea2(int w, int h);
int computeArea3();
int computeArea4(int w, int h);

int main(){



    return 0;
}

void computeArea1(){
    int w, h;
    scanf("%d", &w);
    scanf("%d", &h);
    printf("Area is: %d", w * h);
}

void computeArea2(int w, int h){
    scanf("%d", &w);
    scanf("%d", &h);
    printf("Area is: %d", w * h);
}

int computeArea3(){
    int w, h;
    scanf("%d", &w);
    scanf("%d", &h);
    return w*h;
}

int computeArea4(int w, int h){
    return w*h;
}
