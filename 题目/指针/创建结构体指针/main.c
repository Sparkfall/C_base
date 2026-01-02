#include <stdio.h>
#include <stdlib.h>

typedef struct Point{
    int x;
    int y;
} Point;

int main(){
    //定义结构体指针
    Point *p = (Point *)malloc(sizeof(Point));

    //赋值
    p->x=1;
    p->y=2;
    printf("Point p %p:\nx: %d\ny: %d\n", p, p->x, p->y);

    //释放内存
    free(p);
    return 0;
}