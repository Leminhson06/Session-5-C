#include <stdio.h>

int main() {
    int choice;
    float num1, num2;

    while (1) {
        printf("\nCALCULATOR\n\n");
        printf("1. Tổng 2 số\n");
        printf("2. Hiệu 2 số\n");
        printf("3. Tích 2 số\n");
        printf("4. Thương 2 số\n");
        printf("5. Thoát\n");
        printf("Lựa chọn của bạn: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Tạm biệt!\n");
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("Lựa chọn không hợp lệ! Vui lòng chọn từ 1 đến 5.\n");
            continue;
        }
        printf("Nhập số thứ nhất: ");
        scanf("%f", &num1);
        printf("Nhập số thứ hai: ");
        scanf("%f", &num2);

        switch (choice) {
            case 1:
                printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("%.2f x %.2f = %.2f\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Lỗi: Không thể chia cho 0!\n");
                } else {
                    printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                }
                break;
            default:
                printf("Lựa chọn không hợp lệ!\n");
                break;
        }
    }

    return 0;
}