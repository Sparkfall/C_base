#include <stdio.h>

int main(){
    // 算术运算符 +、-、*、/、%
    int sum = 1 + 3;
    printf("Sum of 1, 3: %d\n",sum);

    // 关系运算符 >、<、>=、<=、==、!=
    int judge = 1 == 2;
    int judge1 = 5>4>3; // 运算逻辑：(5>4)>3
    printf("Is 1 equal to 2? %d\n",judge);
    printf("Is 5>4>3? %d\n",judge1);

    // 逻辑运算符 &&、||、!
    int logic = (1 < 2) && (2 < 3);
    printf("Is 1 < 2 and 2 < 3? %d\n",logic);

    // 条件运算符
    int result = 1+1 == 2 ? 123 : 456;
    printf("result:%d",result);
    return 0;
}