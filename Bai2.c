#include <stdio.h>


int isPrime(int n) {
    if (n < 2) {
        return 0; 
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    int n;

    printf("Nhập một số nguyên dương: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui lòng nhập một số nguyên dương!\n");
    } else {
        if (isPrime(n)) {
            printf("%d là số nguyên tố.\n", n);
        } else {
            printf("%d không phải là số nguyên tố.\n", n);
        }
    }

}