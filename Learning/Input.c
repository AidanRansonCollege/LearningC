#include <stdio.h>
#include <string.h>

int main(){

    char name[25]; //bytes
    int age;

    printf("\nWhat's your name?\n");
    //scanf("%s", &name); reads up until whitespace
    fgets(name, 25, stdin); //reads whitespace

    //remove \n at end of fgets
    name[strlen(name)-1] = '\0';

    printf("Hello %s!", name);

    printf("\nHow old are you?\n");
    scanf("%d", &age);

    printf("You are %d years old", age);

    return 0;
}