// AH 7Th random notes!
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    srand(time(NULL));{
    for(int i=0; i<5; i++);
        int num = rand() % 20 +1;
        printf("our randiom number is %d\n", num);
    }

    return 0;
}