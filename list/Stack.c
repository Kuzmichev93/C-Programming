#include <stdio.h>
#include <stdlib.h>

struct stack{
    int data;
    struct stack* next;
    
};




struct stack* push(struct stack* top,int data){
    struct stack* ptr = malloc(sizeof(struct stack));
    ptr->data = data;
    ptr->next = top;
    return ptr;
}


struct stack* pop(struct stack* top){
    if(top == NULL){
        return top;
    }
    struct stack* top_next = top->next;
    free(top);
    return top_next;
    
}

int main(){
    struct stack* top = NULL;
    top = push(top,1);
    top = push(top,2);
    top = push(top,3);
    top = push(top,4);
    
    struct stack* h = pop(top);
    printf("%d\n",h->data);
    
    

   
    

    
    


}

