#include <stdio.h>

void birthday(){
    printf("Happy Birthday\n");
}

void data(char[],int);

int findMax(int x, int y){
    return(x>y) ? x : y;
}
int main(){

    char name[]="Arya";
    int age=20;
    data(name,age);
    int max=findMax(31,92);
    printf("%d",max);
    
    return 0;


}

void data(char name[], int age){
    printf("name:%s\nage:%d\n",name,age);
}