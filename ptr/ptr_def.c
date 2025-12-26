#include <stdio.h>

int main(){
    int a = 1;
    // 定义指针
    int *p = &a;
    printf("ptr%p:%d\n",p,*p);

    // 多重指针
    int **pp = &p;
    printf("ptr_ptr%p:%p\n",pp,*pp);

    // 空指针
    int *np = NULL;
    printf("null_ptr%p\n",(void *)np);
    
    return 0;
}