//Ah 7th family loop
#include <stdio.h>

int main(void){ 
    char members[][15] = {"Mom", "Dad", "Victoria", "Conrad", "Rosie", "Ella", "Clara"};
    for(int x = 0; x < 7;x++){
        printf("Hi %s\n", members[x]);
    }
    return 0;
}