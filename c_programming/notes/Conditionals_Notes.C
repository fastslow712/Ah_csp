// AH 7Th condishionals notes!
#include <stdio.h>
#include <string.h>
int main(){
    int grade;
    char name[50];
    printf("what is your grade percent?\n");
    scanf("%d", &grade);
    printf("what is your name?\n");
    scanf("%s", &name);    
    //printf("%d\n",strcmp(name, "Ms.laRose"));
    if(strcmp(name, "Ms.laRose") == 0){
        printf("you dont get a grade\n");
    }else if(grade >= 90){
        printf("you have an A!\n");
    }else if(grade >= 80){
        printf("you have a B!\n");
    }else if(grade >= 70){
        printf("you have a C!\n");
    }else{
        printf("you are failing:(!\n");
    }

    return 0;
}


//What puts something inside of the “if” statement?
//{} and tab
//How are conditions written in C?
//if(condishon){}
//How do we write elif conditions in C?
//else if
//When do else conditions run?
//when it is true and none of the preveios condishionals are true
//What are the 3 logical operators in C?
//&&=and,||=or,!=not