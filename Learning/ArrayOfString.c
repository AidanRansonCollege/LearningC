#include <stdio.h>
#include <string.h>

int main(){

    char cars[][10] = {"Mustang", "Corvette", "Camaro"};

    strcpy(cars[2], "Buggy");

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++){
        printf("%s\n", cars[i]);
    }

    return 0;
}