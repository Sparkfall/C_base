#include <stdio.h>
#include <math.h>
#include <windows.h>

// 计算阶乘
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double calculate_e(int n) {
    if (n <= 0) {
        return -1;
    }

    double e = 1.0;
    double term;
    double epsilon;

    epsilon = pow(10, -n);

    int i = 1;
    do {
        term = 1.0 / factorial(i);
        e += term;
        i++;
    } while (term > epsilon);

    return e;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;

    // 输入有效位数
    printf("请输入有效位数 n (n ≥ 1): ");
    scanf("%d", &n);

    // 输入验证
    while (n <= 0) {
        printf("输入错误！n 必须为正整数，请重新输入: ");
        scanf("%d", &n);
    }

    // 计算 e 的近似值
    double e_approx = calculate_e(n);

    // 输出结果，保留 10 位小数
    printf("自然常数 e 的近似值 (保留 %d 位有效数字): %.10f\n", n, e_approx);

    return 0;
}
