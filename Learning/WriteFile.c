#include <stdio.h>

int main(){

    
    FILE *pF = fopen("test.txt", "a");

    fprintf(pF, "\nHello World 2");

    fclose(pF);
    

    /*
    if(remove("test.txt") == 0){
        printf("File was deleted successfully");
    }
    else{
        printf("That file was NOT deleted");
    }
    */
}