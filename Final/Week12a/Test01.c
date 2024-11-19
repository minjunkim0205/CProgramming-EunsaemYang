#include <stdio.h>

/*Struct*/
typedef struct
{
    char name[50];
    int age;
    int id;
}Student;

/*Main*/
int main(){
    Student student = {"MinjunKim", 21, 20235128};
    
    printf("Name : %s\nAge : %d\nId : %d", student.name, student.age, student.id);

    return 0;
}