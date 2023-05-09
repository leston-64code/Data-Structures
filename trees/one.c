#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prelink;
    struct node *nextlink;
};

struct node *createNode(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->nextlink=NULL;
    newnode->prelink=NULL;
    return newnode;
}

void preOrder(struct node *root){
   if(root!=NULL){
     printf("%d ",root->data);
    preOrder(root->prelink);
    preOrder(root->nextlink);
   }
    
}

void postOrder(struct node *root){
    if(root!=NULL){      
        postOrder(root->prelink);
        postOrder(root->nextlink);
        printf("%d ",root->data);
    }
    
}

void inOrder(struct node *root){
    if(root!=NULL){      
        inOrder(root->prelink);
        printf("%d ",root->data);
        inOrder(root->nextlink);
    }
    
}

void main(){
    struct node *p=createNode(25);
    struct node *p1=createNode(45);
    struct node *p2=createNode(65);
    struct node *p3=createNode(987);
    struct node *p4=createNode(258);
    p->prelink=p1;
    p->nextlink=p2;

    p1->prelink=p3;
    p1->nextlink=p4;
    preOrder(p);
    printf("\n");
    postOrder(p);
    printf("\n");
    inOrder(p);
}