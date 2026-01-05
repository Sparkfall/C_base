#include <stdio.h>

int main(){
    int x1=1,x2=1,num=1,temp;
    printf("Please input the index:");
    scanf("%d",&num);

    switch(num){
        case 1: printf("1");break;
        case 2: printf("1");break;
        default:{
            for(int i=2;i<num;i++){
                temp=x2;
                x2+=x1;
                x1=temp;
            }
            break;
        }
    }
    return 0;
}