#include <stdio.h>
#include <stdlib.h>

int main(){
 int Num[3][2]={
     {3,4},
     {4,3},
     {5,9}
     };
     int i, j;
     for(i = 0; i < 3; i++){
     for(j = 0; i < 2; j++){
        printf("%d", Num[i][j]);
     }
     printf("\n");

    }

     return 0;
}
