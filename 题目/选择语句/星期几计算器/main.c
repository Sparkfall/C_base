#include <stdio.h>

int main(){
    int totalDays=0,daysInmonth[] = {0,31,28,31,30,31,30,31,31,30,31,30};

    int m,d;
    printf("Please input month and day: ");
    scanf("%d %d",&m,&d);

    for(int i=0;i<m;i++){
        totalDays += daysInmonth[i];
    }
    totalDays += d-1;
    totalDays %= 7;

    switch(totalDays){
        case 1:{
            printf("Monday");
            break;
        };
        case 2:{
            printf("Tuesday");
            break;
        };
        case 3:{
            printf("Wednesday");
            break;
        };
        case 4:{
            printf("Thursday");
            break;
        };
        case 5:{
            printf("Friday");
            break;
        };
        case 6:{
            printf("Saturday");
            break;
        };
        case 0:{
            printf("Sunday");
            break;
        };
    };
    return 0;
}