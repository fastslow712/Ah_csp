// AH 7Th Loops notes!
#include <stdio.h>

int main(void){
    int nums[]= {0,1,2,3,4,5,6,7,8,9,10}; //array
    char candys[][20] = {"kitkat", "hershey"}; 
    for(int x = 0; x < 11;x++){
        printf("%d\n", nums[x]);
    }
    for(int i = 0; i < 2;i++){
        printf("%s is good.\n", candys[i]);
    }
    for(int num = 1; num < 11; num++){
        printf("%d\n", num);
    }
    int num = 0;
    while (num < 11){
        printf("%d\n", num);
        num++;
    }

    return 0;
}


//What is a loop?
//a repeting seqence of insturucshionsh
//What are the two types of loops?
//for and while
//What is iteration
//how maney times a code has run
//What are arrays?
//lists
//How do you make lists in C?
//data_type vareable_name[]= {list itoms};
//How do you make for loops in C?
//for(condishion){}
//How do you make while loops in C?
//while (condishion){}