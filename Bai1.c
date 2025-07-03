#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Nhập một số nguyên dương n: ");
    scanf("%d", &n);

  
    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        printf("Tổng các số nguyên từ 1 đến %d là: %d\n", n, sum);
    } else {
        printf("Vui lòng nhập một số nguyên dương!\n");
    }

   
}