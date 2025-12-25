#include <stdio.h>
//变量的作用域

int main(){
    // 块内定义的变量只能在块内作用
    int x = 10;
    {
        int x = 20;
        printf("inner x: %d\n",x);
    }
    printf("Out x:%d\n",x);
    /*
    Ouput:
    inner x: 20
    Out x:10
    */

    // 块内可以改变快外的变量值
    int y = 10;
    {
        y = 20;
        printf("inner y: %d\n",y);
    }
    printf("Out y:%d\n",y);
    return 0;
    /*
    Output:
    inner y: 20
    Out y:20
    */
}