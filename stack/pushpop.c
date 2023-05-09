#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int *arr;
    int top;
};

int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }return 0;
}

int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }return 0;
}

void stackpush(struct stack *stack,int value){
    if(isFull(stack)){
        printf("Stack Overflow\n");
        return;
    }else{
        stack->top++;
        stack->arr[stack->top]=value;
    }
}

int stackpop(struct stack *stack){
    if(isEmpty(stack)){
        printf("Stack underflow\n");
    }else{
        int value=stack->arr[stack->top];
        stack->top--;
        return value;
    }
}

void main(){
    int num;
    struct stack *sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int *));
    if(isEmpty(sp)){
        printf("Stack is empty\n");
    }else{
        printf("Stack is not empty\n");
    }
    stackpush(sp,582);
    
    if(isEmpty(sp)){
        printf("Stack is empty\n");
    }else{
        printf("Stack is not empty\n");
    }

    num=stackpop(sp);
    printf("Element popped is %d\n",num);
    if(isEmpty(sp)){
        printf("Stack is empty\n");
    }else{
        printf("Stack is not empty\n");
    }

    
}