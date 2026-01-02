#include <stdio.h>

int main(){
    int a,b;
    char op;

    printf("Please input an expression num operator num: ");
    scanf("%d %c %d",&a,&op,&b);
    if(op == '/' && b == 0){
        printf("cannot divide by zero");
        return 1;
    }

    switch(op){
        case '+':{
            printf("%d",a+b);
            break;
        };
        case '-':{
            printf("%d",a-b);
            break;
        };
        case '*':{
            printf("%d",a*b);
            break;
        };
        case '/':{
            printf("%lf",(double)a/(double)b);
            break;
        };
        case '%':{
            printf("%d",a%b);
            break;
        }
        default:{
            printf("invalid operator");
            break;
        };
    };

    return 0;
}