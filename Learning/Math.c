#include <stdio.h>
#include <math.h>

int main(){
    int x = 5;
    int y = 7;

    int z = x * y;
    float a = x/ (float) y;

    printf("%f\n", a);
    printf("%d\n", z);
    z++;


    printf("%d\n", z);
    a += 3;
    printf("%f\n", a);

    double A = sqrt(9);
    double B = pow(2,5);

    printf("\n%lf", B);


    return 0;
}