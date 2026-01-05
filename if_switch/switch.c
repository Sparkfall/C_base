#include <stdio.h>

int main(){
    int value=1;
    char c='A';

    switch(value){
        case 0:{
            printf("value is 0\n");
            break;
        }
        case 1:{
            printf("value is 1\n");
            break;
        }
    }

    switch(c){
        case 'A':{
            printf("c is A\n");
            break;
        }
        case 'B':{
            printf("c is B\n");
            break;
        }
    }
    return 0;
}