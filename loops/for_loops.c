#include <stdio.h>

int main(){

    int rows;
    int cols;
    int symbol;


    printf("Enter Number of rows : ");
    scanf("%d",&rows);
    printf("\nEnter Number of columns : ");
    scanf("%d",&cols);
    
    printf("\nEnter choice of symbol : ");
    scanf(" %c",&symbol);
    

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
           // printf("%d",j);
            printf("%c",symbol);
        }
        printf("\n");
    }







    return 0;
}


