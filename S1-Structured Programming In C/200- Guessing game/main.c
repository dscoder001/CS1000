#include <stdio.h>
#include <stdlib.h>

int main(){
 int SecreatNumber = 5;
 int guess;
 int guesscount = 0;
 int guesslimit = 3;
 int outofguess = 0;

  while( guess != SecreatNumber && outofguess == 0){
        if(guesscount < guesslimit){
  printf("Enter a number:");
  scanf("%d", &guess);
  guesscount++;
  } else{
  outofguess = 1;}
  }

  if(outofguess == 1){
  printf( "out of guesses");
  }
  else {
    printf("you win");
  }


return 0;
}
