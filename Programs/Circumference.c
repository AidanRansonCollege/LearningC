#include <stdio.h>
#include <math.h>

int main(){

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);
    
    circumference = 2 * radius * PI;
    area = PI * pow(radius, 2);
    printf("\nThe circumference of the circle is %lf", circumference);
    printf("\nThe area of the circle is %lf", area);
    

    return 0;
}