#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Hàm kiểm tra toán tử
int is_operator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

// Hàm ưu tiên toán tử
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

// Hàm thực hiện phép toán
int apply_operator(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
    return 0;
}

// Hàm tính toán biểu thức
int evaluate_expression(const char* expression) {
    int values[100]; // Stack lưu trữ các giá trị
    char ops[100];   // Stack lưu trữ các toán tử
    int val_top = -1, ops_top = -1;

    for (int i = 0; i < strlen(expression); i++) {
        // Bỏ qua khoảng trắng
        if (isspace(expression[i])) continue;

        // Nếu là số, đẩy vào stack giá trị
        if (isdigit(expression[i])) {
            int value = 0;
            while (i < strlen(expression) && isdigit(expression[i])) {
                value = value * 10 + (expression[i] - 48);
                i++;                                        // vẫn kt như rong for kia
            }
            i--; // Lùi lại một bước // khi ra đây là ko còn digi mà la dấu -> lùi lại để lưu dấu vô stack bên dưới
            values[++val_top] = value;
        }
        // Nếu là dấu mở ngoặc, đẩy vào stack toán tử
        else if (expression[i] == '(') {
            ops[++ops_top] = expression[i];
        }
        // Nếu là dấu đóng ngoặc, tính toàn bộ biểu thức trong ngoặc
        else if (expression[i] == ')') {
            while (ops_top >= 0 && ops[ops_top] != '(') {
                int b = values[val_top--];
                int a = values[val_top--];
                char op = ops[ops_top--];
                values[++val_top] = apply_operator(a, b, op);
            }
            ops_top--; // Bỏ dấu '('
        }
        // Nếu là toán tử
        else if (is_operator(expression[i])) {
            while (ops_top >= 0 && precedence(ops[ops_top]) >= precedence(expression[i])) {
                int b = values[val_top--];
                int a = values[val_top--];
                char op = ops[ops_top--];
                values[++val_top] = apply_operator(a, b, op);
            }
            ops[++ops_top] = expression[i];    // la mo ngoac hoac *
        }
    }

    // Xử lý phần còn lại của stack
    while (ops_top >= 0) {
        int b = values[val_top--];
        int a = values[val_top--];
        char op = ops[ops_top--];
        values[++val_top] = apply_operator(a, b, op);
    }

    // Giá trị cuối cùng là kết quả
    return values[val_top];
}

int main() {
    char expression[1000];

    printf("Nhập biểu thức: ");
    fgets(expression, sizeof(expression), stdin);
    expression[strcspn(expression, "\n")] = '\0'; // Loại bỏ ký tự xuống dòng

    int result = evaluate_expression(expression);
    printf("Kết quả: %d\n", result);

    return 0;
}
