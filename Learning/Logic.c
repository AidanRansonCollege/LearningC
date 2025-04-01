#include <stdio.h>
#include <stdbool.h>

int main(){

    float temp = 52;
    bool sunny = true;
    bool cloudy = false;
    bool sunrise = true;
    bool sunset = false;

    if(temp >= 32 && temp <= 90 && sunny){
        printf("\nThe weather is good");
    }
    else{
        printf("\nThe weather is bad");
    }

    if(sunrise || sunset){
        printf("\nThe sun looks pretty");
    }

    if(sunny && !cloudy){
        printf("\nGo outside and enjoy the weather");
    }

    return 0;
}