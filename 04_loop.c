#include<stdio.h>
#include<math.h>

int main(){
    int i;
    // i ngoài và i trong khác scope
    for(int i = 1; i <= 3; i++){
        printf("\n%d Nguyen Thai An", i);
    }
    


    return 0;
}