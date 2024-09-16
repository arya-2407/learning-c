#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    const int MIN=1;
    const int MAX=20;
    int guess;
    int found=0;
    int num_guesses=0;
    srand(time(0));

    int answer=(rand()%MAX) + MIN;
    
    while(found==0){
        num_guesses++;
        printf("enter guess : ");
        scanf("%d",&guess);
        if(guess>answer){
            printf("answer is lower\n");
        }
        else if(guess<answer){
            printf("answer is higher\n");
        }else{
            printf("CORRECT\n");
            found=1;
        }
    }

    printf("It took you %d guesses",num_guesses);




    return 0;
}