#include <stdio.h>
#include <stdlib.h>


int main(){
  char Grade = 'A';

  switch (Grade){
  case 'A' :
      printf("you did great!");
      break;
      case 'B' :
      printf("you did alright!");
      break;
      case 'C' :
      printf("you did poorly!");
      break;
      case 'D' :
      printf("you did bad!");
      break;
      case 'F' :
      printf("you failed!");
      break;
      default :
      printf("invalid grade");
  }





return 0;
}
