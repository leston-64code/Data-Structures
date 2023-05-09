#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *createLinkedList(struct node *head,int  size){
    struct node *temp;
    int i,val;
    for(i=0;i<size;i++){
        if(i==0){
            printf("Enter the data of head : ");
            scanf("%d",&val);
            head->data=val;
            if(size==1){
                head->next=NULL;
                return head;
            }
            temp=head;
        }else{
            printf("Enter value of %d node : ",i+1);
            scanf("%d",&val);
            struct node *newnode=(struct node *)malloc(sizeof(struct node));
            temp->next=newnode;
            newnode->data=val;
            newnode->next=NULL;
            temp=newnode;
        }
    }

    return head;
}

void traverseLinkedList(struct node *pointer){
  while (pointer!=NULL)
  {
    printf("Element is :- %d\n", pointer->data);
    pointer=pointer->next;
  }
  
}

void main(){
    struct node *head=(struct node *)malloc(sizeof(struct node));;
    int size;
    printf("Enter number of nodes you want\n");
    scanf("%d",&size);
    head=createLinkedList(head,size);
    traverseLinkedList(head);
}