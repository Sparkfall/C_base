#include <stdio.h>

int main(){
    int a,b;
    printf("Please input number_a and number_b:");
    scanf("%d %d",&a,&b);

    while(a!=b){
        if(a>b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }
    printf("The greatest common divisor is: %d\n",a);
    return 0;
}