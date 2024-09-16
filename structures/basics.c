#include <stdio.h>
#include <string.h>


struct Player{
    char name[12];
    int age;
};

typedef struct{
    char username[25];
    char password[10];
    int id;    
} User;



int main(){

    struct Player player1;
    struct Player player2;

    strcpy(player1.name,"Arya");
    player1.age=20;

    strcpy(player2.name,"Gurshan");
    player2.age=21;


    printf("Player 1 Details: \nName: %s\nAge: %d\n",player1.name,player1.age);
    printf("Player 2 Details: \nName: %s\nAge: %d\n",player2.name,player2.age);

    //using typedef struct

    User user1 = {"User1","123",1};
    printf("User 1 Details: \nusername: %s\npassword: %s\nid: %d\n",user1.username,user1.password,user1.id);


    return 0;
}