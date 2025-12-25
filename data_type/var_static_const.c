#include <stdio.h>
void func();

int main(){
    // const：只读变量
    const int a = 0;
    // a = 1; // 错误，const变量不可修改
    printf("a:%d\n",a);

    func(); // b:1
    func(); // b:2
    func(); // b:3
    func(); // b:4
    func(); // b:5
    func(); // b:6

    return 0;
}

void func(){
    // static：静态变量,局部变量的生命周期延长至整个程序运行期间
    static int b = 0;
    b++;
    printf("b:%d\n",b);
}