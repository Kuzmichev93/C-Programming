#include <stdio.h>
#include <stdlib.h>
//Sorting by insertion
void sort_insert(int *array,int size);

int main(){
    int array[10] = {10,9,8,70,6,5,4,3,2,1};
    int size = sizeof(array)/sizeof(*array);
    sort_insert(array,size);
}


void sort_insert(int *array,int size){
    int top;
    for (int i = 1;i<size;i++){
        for (int k = i;k>0;k--){
            if(array[k-1]>array[k]){
                top = array[k];
                array[k] = array[k-1];
                array[k-1] = top;    
            }
        }
    }
    //Printing a sort array
    for (int i = 0;i<size;i++){
        printf("%d",array[i]);
    }
}