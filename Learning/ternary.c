#include <stdio.h>

int findMax(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}


// condition ? value if true : value if false
int findMax2(int x, int y){
    return (x > y) ? x : y;
}

int main(){

    int max = findMax(3, 4);

    printf("\n%d", max);

    int max2 = findMax2(6,4);

    printf("\n%d", max2);

    return 0;
}