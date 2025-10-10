// ah 7th name decor 
#include <stdio.h>
#include <string.h>

int main(void){
    char name[25];
    char decor1[] = "(:(:(:";
    char decor2[] = ":):):)";
    char decorated_name[50];
    printf("what is your name?\n");
    scanf(" %s", &name);
    strcat(decorated_name, decor1);
    strcat(decorated_name, name);
    strcat(decorated_name, decor2);
    printf("Hi %s", decorated_name);

    return 0;
}