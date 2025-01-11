#include <stdio.h>

int main() {
    int arr[3] = { 3, 4, 5 };
    int *pt = arr;
    printf("So ne %d", *(pt++));
    printf("So ne %d", *(pt));

    return 0;
}
