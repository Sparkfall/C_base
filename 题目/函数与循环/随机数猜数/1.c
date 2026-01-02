#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    // 初始化随机数生成器
    srand((unsigned int)time(NULL));

    char play_again = 'y';

    while (play_again == 'y' || play_again == 'Y') {
        int target = rand() % 100 + 1;
        int guess;
        int guess_count = 0;
        int input_valid;
        printf("我已经生成了一个1到100之间的随机数，请猜猜看。\n");

        while (1) {
            printf("请输入你的猜测：");
            input_valid = scanf("%d", &guess);

            while (getchar() != '\n');

            if (input_valid != 1) {
                printf("无效输入，请输入一个整数！\n");
                continue;
            }

            guess_count++;

            if (guess < target) {
                printf("猜小了！\n");
            } else if (guess > target) {
                printf("猜大了！\n");
            } else {
                // 猜对了
                printf("恭喜你猜对了！目标数是：%d\n", target);
                printf("你总共猜测了%d次。\n", guess_count);
                break;
            }
        }

        // 询问是否重新开始
        printf("是否要重新开始游戏？(y/n)：");
        scanf(" %c", &play_again);
        // 清除输入缓冲区
        while (getchar() != '\n');
    }

    printf("谢谢参与游戏，再见！\n");
    return 0;
}
