#include <stdio.h>
#include <stdlib.h>
int main()
{
  int num1;
  double num2;
  printf("enter first number:");
  scanf("%d", &num1);

  printf("enter second number:");
  scanf("%lf", &num2);

  printf("answer: %f", num1 + num2);
  return 0;
}
