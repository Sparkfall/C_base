#include <stdio.h>
#include <stdint.h>

int main(){
    uint8_t a = 255;
    printf("%d\n",a+=1);
    printf("size of int8:%zu\n",sizeof(int));
    printf("size of uint8_t:%zu\n",sizeof(unsigned int));
    return 0;
}