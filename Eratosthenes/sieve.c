#include <stdio.h>
#include <stdlib.h>
//Решето Эратосфена
void sieve(int size);


int main(){
    sieve(100);
    return 0;
}

void sieve(int size){
    //Creating and filling an array
    int *array  = calloc(size,sizeof(int));
    for(int i = 0;i<size;i++){
        array[i] = i;
    }
    //Setting 0 in composite numbers
    for (int i = 2;i<size;i++){
        for (int z = i*i;z<size;z+=i){
            array[z] = 0;
            
        }
        
    }

    //Printing a sieve
    for (int i = 2;i<size;i++){
        printf("%d\n",array[i]);
    }

    free(array);

}

