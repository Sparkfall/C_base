#include <stdio.h>

int main(){
    // 越界访问
    float a = 1,b = 2;
    double *dp = (double *)&a;
    printf("value of double ptr%p:%f\n",dp,*dp);
    *dp = 2.0;
    printf("a:%d\nb:%d\n",a,b);

    // 按1字节读取数据
    int t = 0x12345678;
    char *cp = (char *)&t;
    printf("%x\n",cp[0]);

    // 覆盖后续字节
    char t1 = 'a',t2 = 'b',t3 ='c',t4 = 'd';
    *((int *)&t4) = (int)0x12345678;
    printf("t1_%p:%x\nt2_%p:%x\nt3_%p:%x\nt4_%p:%x\n",&t1,t1,&t2,t2,&t3,t3,&t4,t4);

    // 悬垂指针
    int *p;
    {
        int d = 20;
        p = &d;
    }
    *p=2;
    printf("dangling ptr%p:%d\n",p,*p);
    
    return 0;
}