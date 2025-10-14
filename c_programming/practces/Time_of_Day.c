// ah 7th Time of Day
#include <stdio.h>
int main(){
    int time;
    printf("what is the hour in military time?\n");
    scanf("%d", &time);
    if (time >= 7 && time < 12){
        printf("good morning\n");
    }else if (time >= 12 && time <= 17){
        printf("good afternoon\n");
    }else if (time > 17 && time <= 20){
        printf("good evning\n");
    }else{
        printf("GOOD NIGHT! GO TO BED!\n");
    }

    return 0;
}