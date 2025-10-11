// ah 7th Silly Sentences 
#include <stdio.h>

int main(void){
    char name[25];
    char verb[25];
    char plural_noun[25];
    printf("give me a name: ");
    scanf("%s", name);
    printf("give me a verb: ");
    scanf(" %s", verb);
    printf("give me a plural nown: ");
    scanf(" %s", plural_noun);
    printf("Silly %s went to the river to %s %s into the river\n", name, verb, plural_noun);

    return 0;
}