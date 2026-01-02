#include <stdio.h>
#include <stdint.h>

int main(){
    // 隐式转换
    int a = 1;
    double b = a;
    printf("size of a:%zu\nsize of b:%zu\n\n",sizeof(a),sizeof(b));

    // 超出范围导致截断，结果为sum%255=45, 45-1=44
    uint8_t sum = (uint8_t)300;
    printf("sum:%d\n\n",sum);

    /*不同类型进行运算时，会将所有操作数转换为同一类型，然后进行运算：
    1、表达式均转为uint64_t,计算得到4
    2、4转为double，结果为4.000000
    */
    int i = 5;
    uint64_t l = 0xffffffffffffffff;
    double result = i + l;
    printf("result:%f\n\n",result);

    // 整数提升： narrower integer types 运算时会被提升为 integer types
    uint8_t o=200,p=100;
    printf("o%d+p%d=%d\n",o,p,o+p);
    if (o+p > 255) {
        printf("error\n\n");
    }

    // 显式类型转换
    double c = 3.14;
    int d = (int)c;
    printf("c:%f\nd:%d\n\n",c,d);

    // 指针类型转换,T*与void*可互转，但T*与U*不可
    int e = 0;
    int *ip = &e;
    void *vp = (void *)ip;
    int *_ip = vp;
    // long *lp = ip; // 错误示例，不能将int*转换为long*
    printf("ip:%p\nvp:%p\n_ip:%p\n\n",ip,vp,_ip);

    // 结构体指针转换


    return 0;
}