#include <stdio.h>
#include <math.h>
#include <windows.h>

// 判断一个数是否为素数
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    if (num <= 3) {
        return 1;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0;
    }

    for (int i = 5; i <= sqrt(num); i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0;
        }
    }

    return 1;
}

void findTwinPrimes(int n) {
    if (n < 5) {
        printf("没有满足条件的孪生素数对\n");
        return;
    }

    printf("小于等于%d的孪生素数对：\n", n);

    for (int i = 3; i <= n - 2; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            printf("(%d,%d) ", i, i + 2);
        }
    }

    printf("\n");
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;

    printf("请输入正整数n：");
    scanf("%d", &n);

    if (n <= 0) {
        printf("请输入正整数！\n");
        return 1;
    }

    findTwinPrimes(n);

    return 0;
}
