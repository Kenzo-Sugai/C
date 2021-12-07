#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    time_t t;
    srand((unsigned) time(&t));
    
    int randomnumber = rand() % 21;

    unsigned int i;
    for(i = 5 ; i > 0 ; --i){
        int rightnumber = 0;
        printf("Type it a number between 0 to 20\n");
        scanf("%d", rightnumber);
        if (randomnumber == rightnumber) {
            printf("Correct! The right number is %d\n", randomnumber);
            break;
        }
        else {
            printf("You have %d tries left\n", i);
            printf("Enter a guess: %d\n", rightnumber);
            if (rightnumber < randomnumber) {
                printf("Sorry, %d is wrong. My number is high than that", rightnumber);
            }
            if (rightnumber > randomnumber) {
                printf("Sorry, %d is wrong. My number is less than that", rightnumber);
            }

        }
    }
    printf("Game Over!");

    return 0;
}