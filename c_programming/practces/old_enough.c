//Ah 7th old enough
#include <stdio.h>

int main(void){ 
    int age;
    printf("give me your age: \n");
    scanf("%d", &age);
    if (age >= 18){
        printf("you can vote!\n");
    }else if (age >= 16){
        printf("you can drive!\n");
    }else if (age >= 15){
        printf("you can get a learners permit!\n");
    }else if (age >= 4){
        printf("you can go to school!\n");
    }else{
        printf("you are not old enough!\n");
    }
    return 0;
}