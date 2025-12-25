#include <stdio.h>

int main() {
    int a = 1; // 整型，4字节
    short int b = 1; // 短整型，2字节
    long int c = 1; // 长整型，4字节
    unsigned int d = 1; // 无符号整型
    printf("int a size: %zu bytes\n", sizeof(a));
    printf("short int b size: %zu bytes\n", sizeof(b));
    printf("long int c size: %zu bytes\n", sizeof(c));
    printf("unsigned int d size: %zu bytes\n", sizeof(d));

    float e = 1.0f; // 单精度浮点型，4字节，6精度
    double f = 1.0; // 双精度浮点型，8字节，15精度
    long double g = 1.0L; // 扩展精度浮点型
    printf("float e size: %zu bytes\n", sizeof(e));
    printf("double f size: %zu bytes\n", sizeof(f));
    printf("long double g size: %zu bytes\n", sizeof(g));

    char h = 'A'; // 字符型，1字节
    printf("char h size: %zu bytes\n", sizeof(h));
    return 0;
}