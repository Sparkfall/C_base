#include <stdio.h>

int main(){
    int n,res=1;
    printf("input a factorial number:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        res*=(i+1);
        printf("i:%d\n",i);
    }
    printf("factorial of %d: %d\n",n,res);
    return 0;
}