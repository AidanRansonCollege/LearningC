#include <stdio.h>
#include <stdbool.h>

void birthday(char name[], int age){
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s", name);
    printf("\nYou are %d years old!", age);
}

double square(double x){

    double result = x * x;
    return result;
}

int main(){
    char name[] = "Bob";
    int age = 32;

    birthday(name, age);

    char name2[] = "Alice";
    int age2 = 35;

    birthday(name2, age2);


    double num;
    printf("\nEnter a number: ");
    scanf("%lf", &num);
    printf("%.2lf squared is %.2lf", num, square(num));
    

    return 0;
}