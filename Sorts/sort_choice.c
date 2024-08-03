#include <stdio.h>
#include <stdlib.h>

void sort_choice(int *array,int size);

int main(){
    int array[10] = {10,9,8,70,6,5,4,3,2,1};
    int size = sizeof(array)/sizeof(*array);
    sort_choice(array,size);
}

void sort_choice(int *array,int size){
    int top;
    for(int i = 0;i<(size-1);i++){
        for(int k = 1+i;k<size;k++){
            top = array[i];
            if(array[i]>array[k]){
                array[i] = array[k];
                array[k] = top;
            }
        }
    }

    for(int i = 0;i<size;i++){
        printf("%d\n",array[i]);
    }
}