#include <stdio.h>
#include <string.h>

typedef struct{
    char name[12];
    float gpa;
} Student;


int main(){

    Student student1 = {"Alice", 4.0};
    Student student2 = {"Bob", 2.8};
    Student student3 = {"Sally", 1.7};
    Student student4 = {"Rick", 3.6};

    Student students[] = {student1, student2, student3, student4};

    for(int i = 0; i < sizeof(students)/sizeof(Student); i++){
        printf("\n%-12s", students[i].name);
        printf(" %.2f", students[i].gpa);
    }

    return 0;
}