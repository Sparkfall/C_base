#include <stdio.h>
#include <math.h>

int isPrime(int n);

int main(){
    int num;
    // 单次判断
    printf("Please input a number:");
    scanf("%d",&num);

    if(isPrime(num)){
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    // 批量判断
    for(int i=0;i<100;i++){
        if(isPrime(i+1)){
            printf("%d ", i+1);
        }
    }
    return 0;
}

int isPrime(int n){
    if(n<=1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    if(n>2){
        if(n%2 == 0){
            return 0;
        }
        for(int i=3;i<=sqrt(n);i++){
            if(n%i == 0){
                return 0;
            }
        }
    }
    return 1;
}