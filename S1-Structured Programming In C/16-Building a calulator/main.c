#include <stdio.h>>
#include <stdlib.h>


int main(){

  double num1;
  double num2;
  char op;

  printf("Enter a number:");
  scanf("%if", &num1);
  printf("Enter a operator");
  scanf(" %c", &op);
  printf("Enter a number:");
  scanf("%if", &num2);

  if(op == '+'){
    print("%f", num1 + num2);
  }else if (op == '-'){
  printf("%f", num1 - num2);
  }else if (op == '/'){
  printf("%f", num1 / num2);
  }else if (op == '*'){
  printf("%f", num1 * num2);
  }
  printf("invalid operator");


return 0;
}




