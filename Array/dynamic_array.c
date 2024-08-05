#include <stdio.h>
#include <stdlib.h>

/*Динамический массив*/
int append(int *data,int *length, int *capacity, int value);

int main(){
    int length = 0;
    int capacity = 10;
    int *data = malloc(sizeof(int) * capacity);

    for (int i = 0;i<11;i++){
        data = append(data,&length,&capacity,i);
    }
}

int append(int *data,int *length, int *capacity, int value){
    if(*length>=*capacity){
        int *array = malloc(sizeof(int) *2* *capacity);
        if (array == NULL){
            return data;
        }
        for(int i = 0;i<*length;i++){
            array[i] = data[i];
        }
        free(data);
        data = array;
    }
    data[*length] = value;
    (*length)++;

    return data;
}