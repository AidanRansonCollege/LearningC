#include <stdio.h>

int main(){

    double prices[5] = {30.0, 23.0, 27.0, 587.0, 94.0};

    for(int i = 0; i < sizeof(prices)/sizeof(double); i++){
        printf("Price %d is $%.2lf\n", i+1, prices[i]);
    }

    return 0;
}