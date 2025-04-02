#include <stdio.h>

void printAge(int *pAge){
    printf("\nYou are %d years old", *pAge);
}

int main(){

    int age = 21;
    int *pAge = &age;


    printf("\nAddress of age: %p", &age);
    printf("\nValue of pAge: %p", pAge);

    printf("\n\nValue of age: %d", age);
    printf("\nValue at stored address: %d", *pAge);

    printAge(pAge);

    return 0;
}