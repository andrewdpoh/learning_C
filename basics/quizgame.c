#include <stdio.h>
#include <ctype.h>

void displayQuestion(int qnNumber, char questions[][100], char options[][100]){
    printf("%s\n", questions[qnNumber]);

    for(int j = 0; j < 4; j++){
        printf("%s\n", options[qnNumber * 4 + j]);
    }
}

int main(){
    char questions[][100] = {"Who was the first woman to win a Nobel Prize?",
                             "What is the capital city of Australia?",
                             "Which planet is known as the Red Planet?"};
    char options[][100] = {"A) Marie Curie", "B) Rosa Parks", "C) Mother Teresa", "D) Amelia Earhart",
                           "A) Sydney", "B) Melbourne", "C) Canberra", "D) Perth",
                           "A) Venus", "B) Jupiter", "C) Mars", "D) Saturn"};
    char answers[] = {'A', 'C', 'C'};
    char userGuess;
    char numOfQns = sizeof(questions)/sizeof(questions[0]);
    int score = 0;

    for(int i = 0; i < numOfQns; i++){
        displayQuestion(i, questions, options);
        printf("Your answer: ");
        scanf(" %c", &userGuess);

        if(toupper(userGuess) == answers[i]){
            printf("Correct! ");
            score++;
        } else {
            printf("Incorrect. ");
        }
        printf("The answer was %c.\n", answers[i]);
    }

    printf("Game End. You got a score of %d/%d.",score,numOfQns);

    return 0;
}