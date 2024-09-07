#include <stdio.h>
#include <stdbool.h>

int main(){


    char operator;
    double num1;
    double num2;
    double result;
    bool flag = true;
    
    //getting num1
    printf("Enter first number : ");
    scanf("%lf",&num1);

    //getting num2
    printf("\nEnter second number : ");
    scanf("%lf",&num2);

    printf("\nEnter operator symbol (+ - * /) : ");
    scanf(" %c",&operator);   

    switch(operator){
        case '+':
            result=num1+num2;
            break;
        case '-':
            result=num1-num2;
            break;
        case '*':
            result=num1*num2;
            break;
        case '/':
            if(num2==0){
                printf("\ncannot divide by 0");
                flag=false;
            }
            result=num1/num2;
            break;
        default:
            flag=false;
            printf("invalid operator");
    }

    if(flag){
        printf("%.2lf %c %.2lf = %.2lf",num1,operator,num2,result);
    }
    


    return 0;
}