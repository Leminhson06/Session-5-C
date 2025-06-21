#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);
    if (a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong!\n");
        return 1;
    }
    int temp_a = a, temp_b = b;
    while (temp_b != 0) {
        int temp = temp_b;
        temp_b = temp_a % temp_b;
        temp_a = temp;
    }
    
    int result = (a * b) / temp_a;
    printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, result);
    
    return 0;
}