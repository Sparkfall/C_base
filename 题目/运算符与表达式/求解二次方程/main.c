#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,delta,x1,x2;
    
    //获取系数
    printf("Please input the a b c:");
    scanf("%lf %lf %lf",&a,&b,&c);

    //计算delta,x1,x2
    delta=b*b-4*a*c;
    x1 = (b+sqrt(delta)) / (-2*a);
    x2 = (b-sqrt(delta)) / (-2*a);

    //输出结果
    printf("The roots are:\nx1=%lf\nx2=%lf\n",x1,x2);
    return 0;
}