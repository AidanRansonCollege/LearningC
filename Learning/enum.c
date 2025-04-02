#include <stdio.h>

enum Day{Sun, Mon, Tue, Wed, Thu, Fri, Sat};

int main(){

    enum Day today = Sat;

    printf("%d", today);

    if(today == Sun || today == Sat){
        printf("\nIts the weekend, PARTY");
    }
    else{
        printf("\nWork time :(");
    }

    return 0;
}