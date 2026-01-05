#include <stdio.h>

int main(){
    int num,y,m,d;
    printf("Please input a date: ");
    num = scanf("%d-%d-%d",&y,&m,&d);
    if(num != 3){
        m=y;
        scanf("/%d/%d",&d,&y);
    }
    printf("You input date is: %4d%02d%02d\n",y,m,d);
    return 0;
}