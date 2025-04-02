#include <stdio.h>

int main(){

    int age;
    char grade;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("\nYou are an adult");
    }
    else if(age == 0){
        printf("\nYou were just born");
    }
    else if(age < 0){
        printf("\nYou haven't been born yet");
    }
    else{
        printf("\nYou are a child");
    }

    printf("\nEnter your lowest grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Perfect");
            break;
        case 'B':
            printf("Nice");
            break;
        case 'C':
            printf("Okay");
            break;
        case 'D':
            printf("Not a F");
            break;
        case 'F':
            printf("Fail");
            break;
        default:
            printf("Not a real grade");
            break;
    }
    return 0;
}