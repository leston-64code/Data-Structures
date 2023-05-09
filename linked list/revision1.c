#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};


struct node *createLL(struct node *head,int size){
    int i,value;
    struct node *temp;
    for(i=0;i<size;i++){
        if(i==0){
            printf("Enter the data of head node : ");
            scanf("%d",&value);
            head->data=value;
            if(size==1){
                head->next=NULL;
            }
            temp=head;
        }else{
            printf("Enter data in %d node : ",i+1);
            scanf("%d",&value);
            struct node *newnode=(struct node*)malloc(sizeof(struct node));
            temp->next=newnode;
            newnode->data=value;
            newnode->next=NULL;
            temp=newnode;
        }
    }
    return head;
}

void displayLL(struct node *pointer){
    while(pointer!=NULL){
        printf("%d ",pointer->data);
        pointer=pointer->next;
    }
}

void main(){
    int n;
    struct node *head=(struct node *)malloc(sizeof(struct node));
    printf("Enter the number of nodes\n");
    scanf("%d",&n);
    head=createLL(head,n);
    displayLL(head);
}