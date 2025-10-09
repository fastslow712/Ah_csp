// ah 7th financhal calculater First Program C
#include <stdio.h>

int main(void){
    char name[50];
    printf("what is your name?\n");
    fgets(name, sizeof(name), stdin);
    printf("hi %s", name);

    return 0;
}

