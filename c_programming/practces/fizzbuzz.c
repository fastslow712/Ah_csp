// ah 7th fizzbuzz
#include <stdio.h>
int main(void){
    int num = 1;
    while(num <= 50){
        if (num%3 == 0 && num%5 == 0){
            printf("fizzbuzz\n");
        }else if (num%5 == 0){
            printf("buzz\n");
        }else if (num%3 == 0){
            printf("fizz\n");
        }else{
            printf("%d\n", num);
        }
        num++;
    }

    return 0;
}