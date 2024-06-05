#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int randnum;
    int userguess;
    int MIN = 1;
    int MAX = 100;
    int guesses = 0;

    // Generate seed based on curent time
    srand(time(0));

    // Generate random number between MIN and MAX
    randnum = rand() % MAX + MIN;

    // Get user input and check against answer
    do{
        printf("Enter guess: ");
        scanf("%d", &userguess);

        if(userguess > randnum){
            printf("Too high!\n");
        } else if(userguess < randnum){
            printf("Too low!\n");
        } else {
            printf("You got it right!\n");
        }

        guesses++;

    } while(userguess != randnum);

    printf("************************\n");
    printf("Answer: %d\nGuesses: %d\n", randnum, guesses);
    printf("************************\n");

    return 0;
}