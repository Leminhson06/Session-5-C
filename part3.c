#include <stdio.h>

int main () {
    int n;
    long long sum = 0;
    printf("Mời bạn nhập một số nguyên dương \n");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Vui lòng nhập lại một số nguyên dương \n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Tổng các số từ 1 đến %d là: %lld\n", n, sum);
    return 0;
}