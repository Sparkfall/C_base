#include <stdio.h>

int main(){
    double height,weight,BMI;
    printf("Please input your height(m) weight(kg):");
    scanf("%lf %lf",&height,&weight);
    //输入检查：正数
    if(height <= 0 || weight <= 0){
        printf("Invalid input.");
        return 1;
    }

    //计算BMI
    BMI = weight / (height * height);
    if(BMI < 18.5){
        printf("You are underweight.");
    }
    else if(BMI < 24.0){
        printf("You are normal.");
    }
    else if(BMI < 28.0){
        printf("You are overweight.");
    }
    else{
        printf("You are obese.");
    }

    return 0;
}