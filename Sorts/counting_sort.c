#include <stdio.h>
#include <stdlib.h>



void counting_sort(int *arg,int size){
    int max = *arg;
    for(int i = 1;i<size;i++){
        if(arg[i]>max){
            max = arg[i];
        }
    }
    
    int *array = calloc(max+=1,sizeof(int));
    
    for(int i = 0;i<size;i++){
        array[arg[i]] = 1;
    }
    
    int count = 0;
    for(int i = 0;i<(max);i++){
        if(array[i] == 1){
            arg[count] = i;
            count += 1;
            
        }
    }

    free(array);
    
    for(int k = 0;k<size;k++){
            printf("%d\n",arg[k]);

    }
    
    
}

int main(){
    
    int x[] = {5,10,1,20,4};
    int size = sizeof(x)/sizeof(x[0]);

    counting_sort(x,size);

}

