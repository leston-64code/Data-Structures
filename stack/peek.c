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

int stackpeek(struct stack *stack,int i){
    if(stack->top-i+1<0){
        printf("Invalid position\n");
        
    }else{
        int value=stack->arr[stack->top-i+1];
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
    stackpush(sp,9876);
    stackpush(sp,123);
    stackpush(sp,285);
    stackpush(sp,15987);
    stackpush(sp,556);
    
    if(isEmpty(sp)){
        printf("Stack is empty\n");
    }else{
        printf("Stack is not empty\n");
    }

    // num=stackpop(sp);
    // printf("Element popped is %d\n",num);
    // if(isEmpty(sp)){
    //     printf("Stack is empty\n");
    // }else{
    //     printf("Stack is not empty\n");
    // }

    // Normal
    // num=stackpeek(sp,3);
    // printf("Element found is %d\n",num);

    // To print all using for loop
    for(int j=1;j<=sp->top+1;j++){
        num=stackpeek(sp,j);
    printf("Element found at position %d is %d\n",j,num);
    }
    
}