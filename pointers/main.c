#include <stdio.h>


int main(){


    int age= 20;
    int *pAge=&age;

    printf("Value of pAge : %p\n", pAge );
    printf("Value stored at pAge : %d", *pAge);





    return 0;
}