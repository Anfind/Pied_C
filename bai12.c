#include<stdio.h>
#include<math.h>
int main() {
    int n;
    scanf("%d", &n);
    // printf("%s", ({ int check = 1; for (int i = 2; i <= sqrt(n); i++) { if (n % i == 0) check = 0; } check; }) ? "la so ng to" : "ko la so nguyen to");
    
    return 0;
}



/*
    int n;
    scanf("%d", &n);
    int check=1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0) check = 0;
    }
    check == 1? printf("la so ng to") :  printf("ko la so ng to")
    return 0;



int check=1;
for(int i = 2; i <= sqrt(n); i++){
    if(n%i==0) check = 0;
}
check;
*/