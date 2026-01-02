#include <stdio.h>

int main(){
    int a = 1,b = 2;
    int *ap = &a,*bp = &b;
    // 读取值
    printf("read:\nptr_a %p:%d\nptr_b %p:%d\n\n",ap,*ap,bp,*bp);

    // 修改值
    *ap = 10;
    *bp = 20;
    printf("modified:\nptr_a %p:%d\nptr_b %p:%d\n\n",ap,a,bp,b);

    // 交换值
    int temp = *ap;
    *ap = *bp;
    *bp = temp;
    printf("after swap:\nptr_a %p:%d\nptr_b %p:%d\n\n",ap,a,bp,b);

    return 0;
}
