#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *ptr;
};

void traverseLinkedList(struct node *pointer){
  while (pointer!=NULL)
  {
    printf("Element is :- %d\n", pointer->data);
    pointer=pointer->ptr;
  }
  
}

struct node *insertAtEnd(struct node *head,int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    struct node *p;
    p=head;
    while(p->ptr!=NULL){
        p=p->ptr;
    }
    p->ptr=newnode;
    newnode->ptr=NULL;
    newnode->data=data;
    return head;
}

void main(){
    struct node *first ;
    struct node *second ;
    struct node *third ;
    struct node *fourth ;

    first =(struct node *)malloc(sizeof(struct node));
    second =(struct node *)malloc(sizeof(struct node));
    third =(struct node *)malloc(sizeof(struct node));
    fourth =(struct node *)malloc(sizeof(struct node));

    first->data=10;
    first->ptr=second;

    second->data=20;
    second->ptr=third;

    third->data=30;
    third->ptr=fourth;

    fourth->data=40;
    fourth->ptr=NULL;

    printf("Before\n");
    traverseLinkedList(first);
    first=insertAtEnd(first,46);
    printf("After\n");
    traverseLinkedList(first);
}