/*
3. Cho trước hai số nguyên numerator và denominator  lần là tử số và mẫu số của một phân số.
Bạn hãy viết chương trình để kiểm tra phân số đã cho có tối giảng hay không?
Một phân số được gọi là tối giản nếu tử số và mẫu số không có ước chung nào khác ngoài 1
vd: numerator = 2
denominator = 3
True
vd: numerator = 2
denominator = 4
False
vd: numerator = 5
denominator = 4
True
*/
#include<stdio.h>
#include<math.h>

int main(){
    int numerator, denominator, flag = 1;
    scanf("%d", &numerator);
    scanf("%d", &denominator);
    for(int i = 2; i <= numerator; i++){
        if( numerator % i == 0 && denominator % i == 0){
            flag = 0;
        }
    }
    if(flag){
        printf("True");
    }else{
        printf("False");
    }
    return 0;
}