#include <stdio.h>

int main(){
    // 异或加密
    int a = 1234;
    int key = 2231;

    int s = a ^ key;
    int d = s ^ key;
    printf("s:%d\nd:%d\n",s,d);

    return 0;
}