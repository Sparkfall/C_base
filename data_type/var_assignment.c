#include <stdio.h>

int main(){
    // 变量初始化，未赋值，为乱码
    int a;
    printf("a:%d\n",a);

    // 单变量赋值: <var_name> = <expression>
    int b = 1;
    printf("b:%d\n",b);

    // 多变量赋值(同类型)
    int c=1,d=2,e=3;
    printf("c:%d,d:%d,e:%d\n",c,d,e);

    // 多重赋值
    int x,y,z;
    x=y=z=13;
    printf("x:%d,y:%d,z:%d\n",x,y,z);
    return 0;
}