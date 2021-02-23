#include <stdio.h>
#include <stdlib.h>

 int main()
 {
    char color[20];
    char pluralNoun[20];
    char celeb[20];

    printf("enter a color:");
    scanf("%s", &color);
    printf("enter a pluralNoun:");
    scanf("%s", &pluralNoun);
    printf("enter a celeb:");
    scanf("%s", &celeb);



    printf("roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("i hate %s\n", celeb);
 }
