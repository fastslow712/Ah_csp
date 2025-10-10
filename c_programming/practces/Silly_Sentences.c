// ah 7th Silly Sentences 
#include <stdio.h>
int main(){
    int time;
    printf("what is the time in military time?\n");
    scanf("%s", time);
    if (time >= 7 && time <= 12){
        printf("good morning");
    }else if (time > 12 && time <= 17){
        printf("good afternoon");
    }else if (time > 17 && time <= 20){
        printf("good evning");
    }else{
        printf("GOOD NIGHT! GO TO BED!");
    }

    return 0;
}