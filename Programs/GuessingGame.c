#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    srand(time(0));

    answer = rand() % MAX + MIN;

    do{
        printf("\nEnter a guess: ");
        scanf("%d", &guess);

        if(guess> answer){
            printf("Too High");
        }
        else if(guess < answer){
            printf("Too Low");
        }
        else{
            printf("Correct !");
        }
        guesses++;
    }while(guess != answer);

   printf("\n**********************");
    printf("\nAnswer: %d", answer);
    printf("\n# of Guesses: %d", guesses);

    return 0;
}