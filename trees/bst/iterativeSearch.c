// program to check wheather a binary tree is binary search tree or not

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

struct node *searchIterative(struct node *root,int key){
    while(root!=NULL){
        if(key==root->data){
            return root;
        }else if(key<root->data){
            root=root->left;
        }else{
            root=root->right;
        }
    }
    // This below condition is given to return null if root itself is null
    return NULL;
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
    // inOrder(p);
    // printf("\n");
    struct node *num=searchIterative(p,15);
    if(num!=NULL){
        printf("Found : %d\n",num->data);
    }else{
        printf("Not found\n");
    }
}