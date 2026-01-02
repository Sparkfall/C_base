#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,delta,output;
    // 获取参数
    printf("Please input a b c:");
    scanf("%lf %lf %lf",&a,&b,&c);

    // 计算并输出结果
    delta = b*b - 4*a*c;
    output = delta >= 0? (fabs((b-sqrt(delta))/(-2*a)) > fabs((b+sqrt(delta))/(-2*a))? (b-sqrt(delta))/(-2*a) : (b+sqrt(delta))/(-2*a)) : -b / (2*a);
    printf("The required root is: %.2lf\n",output);
    return 0;
}