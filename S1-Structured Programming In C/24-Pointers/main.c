#include <stdio.h>
#include <stdlib.h>

int main(){
  int age = 30;
  int * pAge = &age;
  double gpa = 3.4;
  double * pGpa = &gpa;
  char grade =  'A';
  char * aGrade = &grade;

  printf("age: %p\n gpa: %p\n grade: %p", &age,&gpa,&grade);

  return 0;


}
