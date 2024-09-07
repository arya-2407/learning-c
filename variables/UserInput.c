#include <stdio.h>
#include <string.h>

int main(){
    
    char name[25]; 
    int age;

    printf("what is your full name : ");
    fgets(name,25,stdin);
    name[strlen(name)-1]='\0';
    
    printf("what is your age : ");
    scanf("%d",&age);

    printf("Data Collected:\nName:%s\nAge:%d",name,age);    




    return 0;
}