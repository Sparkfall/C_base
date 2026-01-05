#include <stdio.h>

int main(){
    int i=0;
    //while循环
    //1.纯while，先判断后执行
    while(i<5){
        i++;
        printf("While Loop Iteration: %d\n", i);
    }
    printf("\n");
    i=0;

    //2.模拟do...while，先执行后判断
    do {
        i++;
        printf("i=%d\n",i);
    } while (i<5);
    printf("\n");
    i=0;

    //3.无限循环+break+continue
    while(1){
        i++;
        if(i>5) break;
        if(i==2) continue;
        printf("i:%d\n",i);
    }
    return 0;
}