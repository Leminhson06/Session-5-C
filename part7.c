#include <stdio.h>

int main () {
    int num1, num2;
    printf("Mời bạn nhập số thứ nhất \n");
    scanf("%d", &num1);
    printf("Mời bạn nhập số thứ hai \n");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <=0 ) {
        printf("Vui lòng nhập lại yêu cầu cần số nguyên dương\n");
        return 1;
    }

    int a = num1, b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
        break;
    }
    printf("Ước chung lớn nhất của %d và %d là %d\n", num1, num2, a);
    return 0;
}