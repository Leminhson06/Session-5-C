#include <stdio.h>

int main () {
    int n;
    printf("Mời bạn nhập số từ 1 đến 9 \n");
    scanf("%d", &n);
    if (n < 1 || n > 9) {
        printf("Vui lòng nhập lại số từ 1 đến 9 \n");
        return 1;
    } 
    for (int i = 1; i <= 9; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}