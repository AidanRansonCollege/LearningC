#include <stdio.h>

int main(){
    int x = 6; // 6 = 00000110
    int y = 12;//12 = 00001100
    int z = 0;//  0 = 00000000

    //z = x& y;  00000100
    //z = x | y; 00001110
    //z = x ^ y; 00001010

    int exponent = 2;

    //z = x << exponent; // x * 2^exponent
    z = x >> exponent; // x / 2^exponent

    printf("%d", z);



    return 0;
}