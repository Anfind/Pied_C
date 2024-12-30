/*Nhập số nguyên dương n bất kỳ. Viết chương trình vẽ tam giác cân "*" rỗng có chiều cao là n hàng.
    *
  *  *
 *     *
* * * * */
#include <stdio.h>
int main(){
   int n;
   printf("Plzzzz nhap so hang: ");
   scanf("%d", &n);
   for(int y = 1; y <= n; y++){
      for(int x = 1; x <= 2*n-1; x++){
         if( x == n-y+1 || x == n+y-1 || y==n ){
            printf("*");
         }else printf(" ");
      }
      printf("\n");
   }
   return 0;
}
