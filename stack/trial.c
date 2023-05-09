#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};

int  isFull(struct stack *stack){
    if(stack->top==stack->size-1){
        return 1;
    }return 0;
}

int  isEmpty(struct stack *stack){
    if(stack->top==-1){
        return 1;
    }return 0;
}

void createStack(struct stack *ptr,int ele){
    if(isFull(ptr)){
        printf("Stack overfull\n");
        return;
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=ele;
        return;
    }
}

void displayStack(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow\n");
        return;
    }else{
        for(int i=1;i<=ptr->top+1;i++){
            printf("Element at position %d is %d\n",i,ptr->arr[ptr->top-i+1]);
        }
    }
}

void main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=10;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    createStack(s,987);
    createStack(s,565);
    createStack(s,22);
    createStack(s,321);
    createStack(s,7412);
    createStack(s,3698);
    // printf("Hello\n");
    displayStack(s);
}