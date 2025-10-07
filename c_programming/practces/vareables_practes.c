// AH 7Th vareables practes
//your name, a number between 1 and 10, a GPA, what you had for breakfast, your favorite color, the school name, the year, your eye color, your age, your favorite subject in school
#include <stdio.h>

int main(void){
    char name[50];
    int num = 5;
    float grade = 85.46;
    char breakfast[50];
    char color[50];
    char school[50];
    int year = 2025;
    char eye[50];
    int age = 15;
    char subject[50];
    printf("what is your name\n");
    fgets(name, sizeof(name), stdin);
    printf("what did you have fore breakfast\n");
    fgets( breakfast, sizeof(breakfast), stdin);
    printf("what is your favorit color\n");
    fgets( color, sizeof(color), stdin);
    printf("what is the name of your school\n");
    fgets( school, sizeof(school), stdin);
    printf("what is your eye color\n");
    fgets( eye, sizeof(eye), stdin);
    printf("what is your favorit subject\n");
    fgets( subject, sizeof(subject), stdin);
    printf("%s", name);
    printf("%d\n", num);\
    printf("%f\n", grade);
    printf("%s\n", breakfast);
    printf("%s\n", color);
    printf("%s\n", school);
    printf("%d\n", year);
    printf("%s\n", eye);
    printf("%d\n", age);
    printf("%s\n", subject);
    return 0;
}