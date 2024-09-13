#include <stdio.h>
#include <string.h>

int main(){

    int number=0;
    int sum=0;

    do{
        printf("Enter num above zero ; ");
        scanf("%d",&number);
        if(number>0){
            sum+=number;
        }
        
    }while(number>0);

    printf("Sum : %d",sum);







    return 0;
}