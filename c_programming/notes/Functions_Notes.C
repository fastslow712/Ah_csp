//Ah 7th Functions Notes
#include <stdio.h>

void birthday(char* name, int age){
    printf("happy birthday to you\n");
    printf("happy birthday to you\n");
    printf("happy birthday dear %s\n", name);
    printf("happy birthday to you\n");
    printf("happy birthday %s you are turning %d\n", name, age);
}
int mul(int x, int y){
    return x *y;
}

float get_number(char* type){
    float value;
    printf("How many %s do you have: ", type);
    scanf("%f", &value);
    return value;
}

int main(void){
    birthday("Jesus", 15);
    birthday("gwen", 14);
    birthday("cecily", 16);
    int prodouct = mul(8, 5);
    printf("%d\n", prodouct);
    printf("%d\n", mul(4, 6));
    float pencils = get_number("pencels");
    float notebooks = get_number("notebooks");
    printf("you have %.2f pencels and %.2f notbooks", pencils, notebooks);

    return 0;
}

//What a function is
//a set of code that runs as many 
//Why we use functions
//so whe don't nead to write the same thing over and over again
//How to write a function in C
//data_type vareable_name(pramiters){}
//What are arguments and parameters?
//parameter and argument are a vareable only in a funchion
//How do arguments and parameters work together?
//parameter is when a vareable is defined argument is wnen it is given a value
//How to use parameters and arguments in C
//you use them to change the output of a funchion
//What are return statements?
//puting a vaue out of a funchion
//How do return statements change how you define a function in C?
//you use a difrent data type
//What do return statements do with the information?
//put it where you call the funchion