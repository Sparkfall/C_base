#include <stdio.h>
#include <math.h>

int main() {
    // 无穷大(Inf)
    double inf_positive = 1.0 / 0.0;
    double inf_negative = -1.0 / 0.0;
    printf("Positive Infinity: %f\n", inf_positive);
    printf("Negative Infinity: %f\n", inf_negative);
    printf("\n");

    // 非数(NaN)
    double nan_1 = 0.0 / 0.0;
    double nan_2 = sqrt(-1.0);
    double nan_3 = inf_positive - inf_positive;
    printf("NaN from 0.0/0.0: %f\n", nan_1);
    printf("NaN from sqrt(-1.0): %f\n", nan_2);
    printf("NaN from Inf - Inf: %f\n", nan_3);
    printf("\n");

    // NaN 不等于其本身
    if(nan_1 != nan_1){
        printf("NaN different from NaN\n");
    } else {
        printf("NaN equal to NaN\n");
    }
    printf("\n");

    // float精度损失
    float a = 0.1f;
    float b = 0.1f;
    if(a + b == 0.3f){
        printf("No precision loss: a + b == 0.3f\n");
    } else {
        printf("Precision loss: a + b != 0.3f\n");
    }
    // 处理方式:相减后小于一个eps
    if(a + b - 0.3f < 1e-10){
        printf("dealed: a + b == 0.3f\n");
    } else {
        printf("undealed: a + b != 0.3f\n");
    }
    printf("\n");
    return 0;
}