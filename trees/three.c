#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *right;
    struct node *left;
};
int count=0;

struct node *insert(int arr[],int i,int n){
    struct node *root=NULL;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(i<n){
        newnode->data=arr[i];
        root=newnode;
        root->left=insert(arr,2*i+1,n);
        root->right=insert(arr,2*i+2,n);
    }
    return root;
}

int nodeCount(struct node *root){
    if(root!=NULL){
        count++;
        nodeCount(root->left);
        nodeCount(root->right);
    }
    return count;
}

struct node *insertNew(int arr[],int i,struct node *temp){
    struct node *root=NULL;
    int n=nodeCount(temp);
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(i<n){
        newnode->data=arr[i];
        root=newnode;
        root->left=insert(arr,2*i+1,n);
        root->right=insert(arr,2*i+2,n);
    }
    return root;
}