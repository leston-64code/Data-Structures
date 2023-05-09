#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *stack){
    if(stack->top==-1){

        return 1;
    }
    return 0;
}
int isFull(struct stack *stack){
    if(stack->top==stack->size-1){
        return 1;
    }
    return 0;
}

void main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=80;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    s->arr[0]=5624;
    // s->top++;
    if(isEmpty(s)){
        printf("Stack is empty\n");
    }else{
        printf("Struct is not empty\n");
    }
}