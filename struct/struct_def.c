#include <stdio.h>

// struct声明
struct Student {
    int id;
    char name[50];
};

// typedef声明
typedef struct newStudent {
    int id;
    char name[50];
} newStudent;

int main(){
    struct Student me = {1234,"Alice"};
    printf("Student ID: %d\n", me.id);
    printf("Student Name: %s\n", me.name);

    newStudent you = {5678,"Bob"};
    printf("newStudent ID: %d\n", you.id);
    printf("newStudent Name: %s\n", you.name);

    // 访问结构体成员 <ptr>-><Prop>,(*ptr).<Prop>
    struct Student* pMe = &me;
    printf("ID: %d\n", pMe->id);
    printf("ID: %d\n",(*pMe).id);
    
    return 0;
}