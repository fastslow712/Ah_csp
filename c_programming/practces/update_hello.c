// ah 7th update hello
#include <stdio.h>

void print_name(char** name){
    printf("Hi %s\n", name);
}
char** enter_name(void){
    char** name[10];
    printf("give me a name\n");
    scanf("%s", &name);
    return name;
}

int main(void){
    char** name[] = enter_name;
    print_name(name);
    char** name[] = enter_name;
    print_name(name);
    char** name[] = enter_name;
    print_name(name);
    char** name[] = enter_name;
    print_name(name);
    char** name[] = enter_name;
    print_name(name);

    return 0;
}