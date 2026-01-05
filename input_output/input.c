#include <stdio.h>

int main(){
    int a,b,c;
    printf("Please input three integers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("You input: %d, %d, %d\n",a,b,c);
    getchar();

    char str[100];
    printf("Please input a string:");
    scanf("%s",str);
    printf("You input: %s\n",str);
    return 0;
}