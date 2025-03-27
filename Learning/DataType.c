#include <stdio.h>
#include <stdbool.h>

int main(){
    char letter = 'A'; //single char (1 byte)
    char name[] = "AAA"; //array of char

    float x = 8.328743287387483998; //(4 bytes) 6-7 digits of precision 
    double y = 8.328743287387483998; //(8 byte)s 15-16 digits


    printf("%0.10f\n", x); //prints first 10 digits of a float, loses precision
    printf("%0.10lf\n", y); //prints first 10 digits of double, keeps precision

    bool e = true; //1 byte

    printf("%d\n", e); //print bool 

    char integer = 100; //char can hold int between -128 to 127
    printf("%d\n", integer); //print char as an int
    printf("%c\n", integer); //print char as ASCII with index of int

    unsigned char unsInt; //int between 0-255 (positive 1 byte)

    short int hello; //(2 bytes) -32768 to 32767
    unsigned short int hello2; //(2 bytes) 0 to 65535

    int goodbye; //(4 bytes) 
    unsigned int goodbye2 = 3983838383992; //(4 bytes)


    long long int realBig; //(8 bytes)


    printf("%d", goodbye2);

    const float PI = 3.14159;

    return 0;
}