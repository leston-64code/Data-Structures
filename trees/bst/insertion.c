
#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *left;
    int data;
    struct node *right;
};

struct node *createNode(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

void inOrder(struct node *root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

void insert(struct node *root,int key){
    struct node *prev;
    while(root!=NULL){
        prev=root;
        if(key==root->data){
            printf("Could not insert\n");
            return;
        }else if(key<root->data){
            root=root->left;
        }else{
            root=root->right;
        }
    }
    struct node *newnode=createNode(key);
    if(key<prev->data){
        prev->left=newnode;
    }else{
        prev->right=newnode;
    }
}

void main(){
    struct node *p=createNode(15);
    struct node *p1=createNode(13);
    struct node *p2=createNode(56);
    struct node *p3=createNode(12);
    struct node *p4=createNode(14);
    
    p->left=p1;
    p->right=p2;

    p1->left=p3;

    p1->right=p4;
    inOrder(p);
    printf("\n");
    insert(p,32);
    inOrder(p);
    // printf("\n");
    // printf("%d ",p->right->left->data);
}