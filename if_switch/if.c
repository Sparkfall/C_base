#include <stdio.h>

int main(){
    int a=1,b=2,c=3;

    //单if判断
    if(a==1) printf("a=1!\n");
    if(b==2) {printf("b=2!\n");}
    if(c==3) {
        printf("c=3!\n");
    }
    printf("\n");

    //if-else判断
    if(a==0) {printf("a==0!\n");} else {printf("a!=0!\n");}
    if(b==0){
        printf("b==0!\n");
    } else {
        printf("b!=0!\n");
    }
    printf("\n");

    //if-else if-else判断
    if(a==0) {printf("a==0\n");} else if(a==2) {printf("a==2\n");} else {printf("a!=0 and a!=2\n");}
    if(b==0){
        printf("b==0\n");
    } else if(b==1){
        printf("b==1\n");
    } else {
        printf("b!=0 and b!=1\n");
    }
    return 0;
}