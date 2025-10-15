// ah 7th update hello
#include <stdio.h>

void print_name(char name){
    printf("Hi %s\n", name);
}

int main(void){
    char* argument[10];
    printf("give me a name\n");
    scanf("%s", &argument);
    print_name(argument);
    printf("give me a name\n");
    scanf("%s", &argument);
    print_name(argument);
    printf("give me a name\n");
    scanf("%s", &argument);
    print_name(argument);
    printf("give me a name\n");
    scanf("%s", &argument);
    print_name(argument);
    printf("give me a name\n");
    scanf("%s", &argument);
    print_name(argument);

    return 0;
}