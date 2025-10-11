// ah 7th Silly Sentences 
#include <stdio.h>

int main(void){
    char name[50];
    char verb[50];
    char plural_nown[50];
    printf("give me a name: ");
    scanf("%s", &name);
    printf("give me a verb: ");
    scanf(" %s", &verb);
    printf("give me a plural nown: ");
    scanf(" %s", &plural_nown);
    printf("Silly %s went to the river to %s %s into the river\n", name, verb, plural_nown);

    return 0;
}