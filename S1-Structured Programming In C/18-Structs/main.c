#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
    };

    int main(){
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2l;
    strcpy(student1.name, "jim");
    strcpy(student1.major, "science" );

     struct Student student2;
    student2.age = 25;
    student2.gpa = 3.24;
    strcpy(student2.name, "jon");
    strcpy(student2.major, "arts" );





    printf("%s", student2.name);
    return 0;



    }




