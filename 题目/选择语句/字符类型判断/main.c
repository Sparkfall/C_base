#include <stdio.h>

int main(){
    char c;
    printf("Please input the char:");
    scanf("%c",&c);

    switch(c){
        case 48 ... 57:{
            printf("Number, values:%d",c);
            break;
        };
        case 97 ... 122:{
            printf("Lowercase letter, ASCII values:%d",c);
            break;
        };
        case 65 ... 90:{
            printf("Uppercase letter, ASCII values:%d",c);
            break;
        };
        case 32:{
            printf("Space");
            break;
        };
        default:{
            printf("Other character");
            break;
        };
    };
    return 0;
}