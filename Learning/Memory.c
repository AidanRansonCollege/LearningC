#include <stdio.h>

int main(){

    int a = 'x';
    int b = 'y';
    int c = 'z';

    double d[2];

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));
    printf("%d bytes\n", sizeof(d));

    printf("%p \n", &a);
    printf("%p \n", &b);
    printf("%p \n", &c);
    printf("%p \n", &d);

    return 0;
}