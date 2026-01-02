#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h> // Windows Sleep
#else
#include <unistd.h> // Unix usleep
#endif

// 跨平台清屏
void clear_screen() {
#ifdef _WIN32
system("cls");
#else
system("clear");
#endif
}

void delay(int milliseconds) {
#ifdef _WIN32
Sleep(milliseconds);
#else
usleep(milliseconds * 1000);
#endif
}

// 弹簧振子可视化（底座固定，单个振子）
void display(double pos) {
clear_screen();
const int left_base = 5;           // 弹簧左侧固定点（列）
const int base_row = 6;            // 底座所在行
const int spring_start_row = 3;    // 弹簧起始行
const double scale = 8.0;          // 位移缩放比例
const int max_oscillator_pos = 75; // 振子最大位置

  // 计算振子位置（限制范围）
int oscillator_pos = left_base + (int)(pos * scale);
oscillator_pos = (oscillator_pos < left_base)            ? left_base
: (oscillator_pos > max_oscillator_pos) ? max_oscillator_pos
: oscillator_pos;
int spring_length = oscillator_pos - left_base; // 弹簧长度

  // 绘制弹簧（从左侧固定点到振子）
for (int row = spring_start_row; row < base_row - 1; row++)
printf("\n");

  // 移动到左侧固定点列
for (int col = 0; col < left_base; col++)
printf(" ");
printf("|"); // 左侧固定端点

  // 绘制弹簧主体（动态长度，用-和~模拟弹性）
for (int col = 0; col < spring_length; col++) {
if ((col) % 4 == 0)
printf("~");
else
printf("-");
}

  // 绘制单个振子（仅在弹簧末端显示O）
printf("O\n");

  // 绘制固定底座（不随振子移动）
for (int col = 0; col < 80; col++) {
if (col >= left_base - 2 && col <= left_base + 2)
printf("="); // 左侧固定底座
else if (col == oscillator_pos + 1)
printf("I"); // 振子投影（可选）
else
printf("-"); // 底座横线
}
printf("\n位移: %.2f | 弹簧长度: %d列\n", pos, spring_length);
}

// ----------------------------------------------------------

void simulate_spring_oscillator(double k, double c, double m, double x0, double v0) {
    double x = x0;
    double v = v0;
    double dt = 0.05;

    printf("开始阻尼弹簧振子模拟...\n");
    printf("参数: k=%.2f, c=%.2f, m=%.2f, x0=%.2f, v0=%.2f\n", k, c, m, x0, v0);
    delay(2000);

    // 迭代计算至少200次
    for (int i = 0; i < 200; i++) {
        double a = (-k / m) * x - (c / m) * v;
        v = v + a * dt;
        x = x + v * dt;
        display(x);
        delay(50);
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    printf("弹簧振子可视化演示...\n");
    for (double i = 0; i < 8.0; i+=0.5) {
        display(i);
        delay(300);
    }

    printf("开始阻尼振动模拟...\n");
    delay(1000);

    // 设置物理参数
    double k = 10.0;
    double c = 0.5;
    double m = 2.0;
    double x0 = 5.0;
    double v0 = 0.0;

    simulate_spring_oscillator(k, c, m, x0, v0);

    printf("模拟完成！\n");

    return 0;
}
