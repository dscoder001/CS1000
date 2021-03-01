#include <stdio.h>
#include <stdlib.h>

int main()
{
      sayHi( "mike", 40);
      sayHi( "yom", 34);
      sayHi( "bheem", 46);

}


    void sayHi( char name[], int age){
        printf("hello %s,you are %d\n", name, age) ;
}
