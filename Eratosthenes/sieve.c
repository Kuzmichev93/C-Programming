#include <stdio.h>
#include <stdlib.h>

void sieve(int size);




int main(){
    sieve(100);
    return 0;
}


void sieve(int size){
    int *array  = calloc(size,sizeof(int));
    for(int i = 0;i<size;i++){
        array[i] = i;
    }

    for (int i = 2;i<size;i++){
        for (int z = i*i;z<size;z+=i){
            array[z] = 0;
            
        }
        
    }
    for (int i = 2;i<size;i++){
        printf("%d\n",array[i]);
    }

    free(array);

}

