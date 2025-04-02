#include <stdio.h>
#include <string.h>

int main(){


for(int i = 0; i < 3; i++){
    printf("%d\n", i);
}


char name[25];

printf("\nWhat's your name?: ");
fgets(name, 25, stdin);
name[strlen(name) - 1] = '\0'; //get rid of \n at end of string

while(strlen(name) == 0){
    printf("\nYou didn't enter your name");
    
    printf("\nWhat's your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0'; //get rid of \n at end of string

}

printf("Hello %s\n\n", name);

int num = 0;
int sum = 0;

do{
    printf("Enter a number above zero: ");
    scanf("%d", &num);
    if(num > 0){
        sum += num;
    }
}while(num > 0);

printf("%d\n", sum);

int rows;
int columns;
char symbol;

printf("\nEnter # of rows: ");
scanf("%d", &rows);
printf("Enter # of columns: ");
scanf("%d", &columns);


printf("Enter a symbol to use: ");
scanf(" %c", &symbol);

for(int i = 0; i < rows; i++){
    for(int j = 0; j < columns; j++){
        printf("%c", symbol);
    }
    printf("\n");
}

    return 0;
}