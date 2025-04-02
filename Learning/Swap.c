#include <stdio.h>
#include <string.h>

int main(){

    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("x = %c\n", x);
    printf("y = %c\n", y);

    char name[15] = "Alice";
    char name2[15] = "Bob";
    char tempName[15];


    strcpy(tempName, name);
    strcpy(name, name2);
    
    strcpy(name2, tempName);

    printf("\nAlice = %s", name);
    printf("\nBob = %s", name2);
    

}