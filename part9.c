#include <stdio.h>

int main () {
    int input;
    while (1) {
        printf("--------------Menu--------------- \n");
        printf("1. Nhập 3 số. \n");
        printf("2. Tổng 3 số. \n");
        printf("3. Trung bình cộng của 3 số. \n");
        printf("4. Số nhỏ nhất. \n");
        printf("5. Số lớn nhất. \n");
        printf("6. Thoát. \n");
        printf("Mời bạn nhập lựa chọn của bạn là: \n");
        scanf("%d", &input);
        printf("--------------------------------- \n");
        
        if (input == 6) {
            printf("Hẹn gặp lại !!!");
            break;
        }
        
        if (input < 1 || input > 6) {
            printf("Lựa chọn không hợp lệ. Vui lòng nhập lại !!!");
            continue;
        }
        
        float num1, num2, num3; 
        switch (1) {
            case 1:
            printf("Mời bạn nhập số thứ nhất \n");
            scanf("%f", &num1);
            printf("Mời bạn nhập số thứ hai \n");
            scanf("%f", &num2);
            printf("Mời bạn nhập số thứ ba \n");
            scanf("%f", &num3);
            break;
            case 2:
            printf("%d + %d + %d = %d\n", num1, num2, num3, num1 + num2 + num3);
            break;
            case 3:
                printf("Trung bình cộng (%d + %d + %d) / 3 = %d\n", num1, num2, num3, (num1 + num2 + num3) / 3);
                break;
            case 4:
                if (num1 > num2 || num1 > num3) {
                    printf("Giá trị lớn nhất là %d\n", num1);
                } else if (num2 > num1 || num2 > num3) {
                    printf("Giá trị lớn nhất là %d\n", num2);
                } else if (num3 > num1 || num3 > num2) {
                    printf("Giá trị lớn nhất là %d\n", num3);
                }
                break;
            case 5:
                break;
            default:
                break;
        }
    }
    return 0;
}