#include <stdio.h>

int main(){
    int str_num;
    str_num = printf("Hello world.\n");
    printf("string number:%d\n",str_num);

    //printf:可自定义输出格式
    //宽度为10
    printf("width=10:||%10d||\n",123);
    //左对齐
    printf("width=10+left:||%-10d||\n",123);
    //前面补0
    printf("width=10+add 0:||%010d||\n",123);
    printf("\n");

    //puts:仅输出字符串，自动包含\n
    puts("Hello world using puts.");
    return 0;
}