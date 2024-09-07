#include <stdio.h>

int main(){

    int age = 20;
    char grade = 'B';
    float gpa = 3.1;
    char name[] = "Arya";

    printf("Hello my name is %s and i am %d years old\n",name,age);
    printf("My grade is %c and my gpa is %f\n",grade,gpa);
    

    gpa += 0.4;
    printf("New gpa is %.2f", gpa);

    return 0;
}