#include<stdio.h>

int checkDigit(char num);
int checkOperator(char ch);
int order(char ch);
int tinh(int a, int b, char ch);

int main(){
    char bieu_thuc[1000];
    printf("Nhap bieu thuc di ban: ");
    scanf("%s", bieu_thuc);

    int stack_giatri[100];
    char stack_op[100];                             // op: operator(+-*/ vaf () )
    int first_giatri = -1, first_op = -1;           // vị rí đầu trong stack là -1 nghĩa là k có gì

    for(int i = 0; bieu_thuc[i] != 0; i++){
        if(checkDigit(bieu_thuc[i])){
            int temp = 0;                            // tam thoi luu so do có thể số lon hon 1 digit
            while(checkDigit(bieu_thuc[i]) && bieu_thuc[i] != 0){       /* luu y */
                temp = temp * 10 + (bieu_thuc[i] - 48);                  // -48 sẽ trở về đúng số đó vì '0' là 48
                i++;
            }                
            i--;                                    // đk thoát là khác số nên lúc đó i khác số, i lùi lại để vòng sau kt tiếp
            first_giatri++;
            stack_giatri[first_giatri] = temp;      // di chuyển index lên và thêm 1 số vào stack                                             
        }else if(bieu_thuc[i] == '('){
            first_op++;
            stack_op[first_op] = '(';    
        }else if(checkOperator(bieu_thuc[i])){
            while(first_op >= 0 && order(bieu_thuc[i]) <= order(stack_op[first_op])){
                int a = stack_giatri[first_giatri];
                first_giatri--;
                int b = stack_giatri[first_giatri];
                char op = stack_op[first_op];
                first_op--;
                stack_giatri[first_giatri] = tinh(a, b, op);
            }
            first_op++;
            stack_op[first_op] = bieu_thuc[i];          // Ko vào while để tính thì +1 vào stack op
        }else if( bieu_thuc[i] == ')'){                 // Tính heetts trong ngoặc và 100% ko còn ngoặc bên trong và đc xép theo */ trước
            while(stack_op[first_op] != '(' && first_op >= 0){     // first_op >= 0 vi can co sack de tinh
                int a = stack_giatri[first_giatri];
                first_giatri--;
                int b = stack_giatri[first_giatri];
                char op = stack_op[first_op];
                first_op--;
                stack_giatri[first_giatri] = tinh(a, b, op);
            }
            first_op--;                                             // bo qua dau (
        }

    }
    // xu li phan con lai cua stack sau khi duyet het  bieu thuc
    while( first_op >= 0){
        int a = stack_giatri[first_giatri];
        first_giatri--;
        int b = stack_giatri[first_giatri];
        char op = stack_op[first_op];
        first_op--;
        stack_giatri[first_giatri] = tinh(a, b, op);
    }
    printf("\n%d", stack_giatri[first_giatri]);
    return 0;
}

int checkDigit(char num){
    if( num >= '0' && num <= '9'){
        return 1;
    }
    return 0;
}

int checkOperator(char ch){
    if( ch == '*' || ch == '/' || ch == '+' || ch == '-' ) return 1;
    return 0;
}

int order(char ch){
    if( ch == '+' || ch == '-') return 1;
    if( ch == '*' || ch == '/') return 2;
    return 0;                                   // ngoac (  )
}

int tinh(int a, int b, char ch){            // a ch b
    if( ch == '+'){
        return a + b;
    }else if( ch == '-'){
        return b - a;
    }else if( ch == '*'){
        return a * b;
    }else return b/a;
}
