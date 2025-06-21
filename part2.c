#include <stdio.h>

int main () {
    int number = 42;
    int input;
    while (1) {
        printf("Mời bạn nhập một số nguyên bất kì");
        scanf("%d", &input);
        if (input == number) {
            printf("Chúc mừng bạn đã đoán đúng \n");
            break;
        } else {
            printf("Sai rồi ! Thử lại nhé \n");12
        }
    }
    return 0;
}