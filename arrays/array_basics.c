#include <stdio.h>
#include <string.h>

int main(){

    //array with decided values
    int height[] = {156,169,189,198,179};
    int height_len=5;

    for(int i=0;i<height_len;i++){
        printf("%d\n",height[i]);
    }

    //array with undecided values
    int weight[5];
    for(int i=0;i<5;i++){
        printf("Enter weight : ");
        scanf("%d",&(weight[i]));
    }

    for(int i=0;i<5;i++){
        printf("%d\n",weight[i]);
    }

    //array with decided and undecided values
    char grade[5]={'A','C'};
    for(int i=0;i<5;i++){
        printf("%c\n",grade[i]);
    }



    return 0;
}