#include <stdio.h>
#include <stdlib.h>


int main(){
 FILE * fpointer = fopen("employees.txt", "w");

 fprintf(fpointer, "Jim , salesman\npam, accounting");


 fclose(fpointer);


 return 0;




}
