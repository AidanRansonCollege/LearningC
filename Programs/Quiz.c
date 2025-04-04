#include <stdio.h>
#include <ctype.h>

int main(){
    char questions[][100] = {"1. What year did the C language Debut?: ",
                             "2. Who created C?: ",
                             "3. What is the predecessor of C?: "};
    
    char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
                           "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
                           "A. Objective C", "B. B", "C. C++", "D. C#"};
    char answers[3] = {'B', 'A', 'B'};

    int numOfQuestions = sizeof(questions)/sizeof(questions[0]);

    char guess = 0;
    int score = 0;

    printf("QUIZ GAME\n");

    for(int i = 0; i < numOfQuestions; i++){
        printf("%s\n", questions[i]);

        for(int j = (i * 4); j < (i * 4) + 4; j++){
            printf("\t%s\n", options[j]);

        }

        printf("Guess: ");
        scanf(" %c", &guess); //Space to clear input buffer

        guess = toupper(guess);

        if(guess == answers[i]){
            printf("Correct!\n");
            score++;
        }
        else{
            printf("Wrong\n");
        }
    }

    printf("Your score was: %d/%d\n", score, numOfQuestions);
    
    return 0;
}