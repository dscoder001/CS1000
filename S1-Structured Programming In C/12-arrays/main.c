#include <stdio.h>
#include <stdlib.h>
int main()
{
    int LuckeyNumbers[] = {3,5,2,8,6};
    LuckeyNumbers[1] = 70;
    printf("%d\n", LuckeyNumbers[3]);
    printf("%d\n", LuckeyNumbers[1]);
    printf("%d\n", LuckeyNumbers[2]);
    return 0;
}
