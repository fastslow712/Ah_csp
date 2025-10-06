// AH 7Th vareables notes!
#include <stdio.h>

int main(void){
    int grade;
    float pi = 3.14;
    double long_pi = 3.1415926358;
    char letter_grade;
    char name[50];
    //user input
    printf("what is your name\n");
    fgets(name, sizeof(name), stdin);

    printf("what is your grade percentige as a whole number: ");
    scanf(" %d", &grade);
    
    printf("what is your letter grade: ");
    scanf(" %c", &letter_grade);

    printf("%s did it!\n", name);
    printf("You have a %d, in the class that is an %c\n", grade, letter_grade);

    return 0;
}
//intigers=int hole numbers 4bytes %d floats=float desimal number 4butes %f double=double beater float 8bytes %lf caricter=char one caricter 1bytes %c multipal caricters are a list %s fgits

//What is the main difference between declaring variables in Python and C?
//you hafto spesify the vareable type in c and you end all statments in ;

//In C, what is the purpose of specifying a data type when declaring a variable?
//to save space 

//List three common data types used in C and their corresponding format specifiers for printf().
//char vareable_name[] %s char %c int %d

//How do you declare and initialize an integer variable named "age" with the value 25 in C?
// int age = 25

//What is the difference between printf() and scanf() functions in C?
//print is an output scan asines a value to a vareable basted on a user input 

//How do you add comments in C? 
// you use //

//What is the purpose of the #include <stdio.h> line at the beginning of a C program?
//aliws us to use inputs and outputs.

//In C, what is the significance of the main() function?
//evrething must be inside of a funchion

//What is the difference between %d and %f format specifiers in printf()?
//d one will not print a number with a desimal f will onley print a number with a desimal

//How do you print a newline character in C?
//

//What is the purpose of the & symbol when using scanf() to get user input?
//& alows scanf to get the

//How do you declare a constant in C? Provide an example.
//writ by const it is used to make a vareble unchangable