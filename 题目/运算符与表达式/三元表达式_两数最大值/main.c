#include <stdio.h>

int main(){
    int a,b,max;
    printf("Please input a b:");
    scanf("%d %d",&a,&b);

    max = a > b ? a : b;
    printf("The max of a,b: %d\n",max);
    return 0;
}