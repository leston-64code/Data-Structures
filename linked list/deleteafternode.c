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

struct node deleteANode(struct node *givennode){
    struct node *p=givennode;
    struct node *q;
    while(q->data!=p->data){
        q=p;
        p=p->ptr;
    }
    q->ptr=p->ptr;
    free(p);

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

    printf("Before deletion\n");
    traverseLinkedList(first);
    printf("After deletion\n");
    deleteANode(second);
    traverseLinkedList(first);
}