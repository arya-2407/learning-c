#include <stdio.h>

int main(int argc, char *argv[]){

    printf("Name of program :%s\n", argv[0]);

    for(int i=1;i<argc;i++){
        printf("arg %d : %s\n", i,argv[i]);
    }

    return 0;
}