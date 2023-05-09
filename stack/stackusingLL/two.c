#include<stdio.h>
#include<stdlib.h>
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

struct node *createStack(struct node *ptr,int size){
    int i,value;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    if(size<=0){
        return 0;
    }
    for(i=0;i<size;i++){
        if(i==0){
            printf("Enter the value of head node\n");
            scanf("%d",&value);
            ptr->data=value;
            if(size==1){
                ptr->next=NULL;
                return ptr;
            }
            ptr->next=NULL;
            temp=ptr;
        }else{
            printf("Enter the value of node %d : ",i+1);
            scanf("%d",&value);
            struct node *newnode=(struct node*)malloc(sizeof(struct node));
            newnode->data=value;
            newnode->next=temp;
            temp=newnode;
        }
    }
    return temp;
}

void display(struct node *top){
    if(isEmpty(top)){
        printf("Underflow\n");
        return;
    }else{
        while(top!=NULL){
        printf("%d ",top->data);
        top=top->next;
    }
    }
}

void main(){
    int n;
    struct node *head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the size of stack\n");
    scanf("%d",&n);
    head=createStack(head,n);
    display(head);
}