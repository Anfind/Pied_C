/*
5.Một công ty quyết định sản xuất lại Ti vi để tung ra thị trường và màn hình Ti vi có chính xác n pixel.

Nhiệm vụ của bạn là xác định kích thước của màn hình Ti vi sao cho chiều rộng và chiều dài chênh lệch nhau ít nhất.

Input        Output
8                 2 4
64               8 8
5                 1 5
*/
#include<stdio.h>
#include<math.h>
int main(){
    int n, width = 0;
    scanf("%d", &n);
    for(int i = 1; i <= sqrt(n); i++){
        if( n % i == 0){
            width = i;
        }
    }
    printf("\nChieu rong la %d\nChieu cao la %d", width, n/width);
    return 0;
}