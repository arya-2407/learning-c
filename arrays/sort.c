#include <stdio.h>


int main(){

    int array[]={6,7,8,2,7,1,24,6};
    int len=sizeof(array)/sizeof(array[0]);

    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(array[i]<array[j]){
                int temp = array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

    for(int i=0;i<len;i++){
        printf(" %d ",array[i]);
    }




    return  0;
}
