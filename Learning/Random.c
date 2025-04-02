#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));

    const int max = 6;
    const int min = 1;

    int number1 = rand() % max + min;

    printf("%d", number1);

    return 0;
}