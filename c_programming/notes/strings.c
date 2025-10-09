// AH 7Th string notes!
#include <stdio.h>
#include <string.h>
int main(void){
    char name[] = "Arthur";
    char last_name[25];
    printf("what is your last name: \n");
    scanf("%s", last_name);
    printf("your name is %s %s\n", name, last_name);
    printf("%c\n", last_name[0]);
    char full_name[50];
    printf("[%s]\n", full_name);
    strcat(full_name, name);
    printf("[%s]\n", full_name);
    strcat(full_name, " ");
    printf("[%s]\n", full_name);
    strcat(full_name, last_name);
    printf("[%s]\n", full_name);
    printf("%zu\n", strlen(name));
    printf("%zu\n", sizeof(name));

    return 0;
}
//What is the difference between a string and a character?
// a caricter holds one leter a string holds mutipule
//What types of quotation marks do we need for a string?
//""
//What library do we need to include to access the string functions in C?
//#include <string.h>
//List functions the library allows us to use.
//strlen sizeof
//How do we concatenate strings in C?
//strcat(vareable_name, what ading)
//How do we get individual characters from a string in C?
//printf("%c\n", vareable_name[num]);