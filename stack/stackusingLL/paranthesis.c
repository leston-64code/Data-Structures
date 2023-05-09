#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    char data;
    struct node *next;
};

struct node *top;

int isFull(struct node *top){
    struct node *testfull=(struct node*)malloc(sizeof(struct node));
    if(testfull==NULL){
        return 1;
    }return 0;
}

int isEmpty(struct node *top){
    if(top==NULL){
        return 1;
    }else{
        return 0;
    }
}


void display(struct node *top){
    if(isEmpty(top)){
        printf("Underflow\n");
        return;
    }else{
        while(top!=NULL){
        printf("%c ",top->data);
        top=top->next;
    }
    }
}

void pushstack(struct node *ptr, int value){
    if(isFull(ptr)){
        printf("Overflow\n");
    }else{
        ptr->data=value;
        ptr->next=NULL;
        top=ptr;
    }
}

void main(){
    int n;
    char exp[20];
    struct node *head=(struct node*)malloc(sizeof(struct node));
    // printf("Enter the expression\n");
    // scanf("%s",exp);
    // n=strlen(exp);
    // printf("%d\n",n);
    // head=createStack(head,n,exp);
    // display(head);

}