#include <stdio.h>
#include <string.h>


struct Player{
    char name[12];
    int age;
};



int main(){

    struct Player player1;
    struct Player player2;

    strcpy(player1.name,"Arya");
    player1.age=20;

    strcpy(player2.name,"Gurshan");
    player2.age=21;


    printf("Player 1 Details: \nName: %s\nAge: %d\n",player1.name,player1.age);
    printf("Player 2 Details: \nName: %s\nAge: %d\n",player2.name,player2.age);


    return 0;
}