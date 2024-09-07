#include <stdio.h>



int main(){


    char grade;
    printf("Enter grade letter : ");
    scanf("%c",&grade);

    switch(grade){
        case 'A':
            printf("\nperfect");
            break;
        case 'B':
            printf("\ngood");
            break;
        case 'C':
            printf("\nokay");
            break;
        case 'D':
            printf("\nbad");
            break;
        case 'F':
            printf("\nwtf");
            break;
        default:
            printf("\ninvalid");
    }





    return 0;
}