#include <stdio.h>

int main(){

    FILE *pF = fopen("test.txt", "r");

    char buffer[255]; //One line of file

    if(pF == NULL){
        printf("Unable to open File");
    }
    else{
        
        while(fgets(buffer, 255, pF) != NULL){
            printf("%s", buffer);
        }
    }

    


    fclose(pF);

    return 0;
}