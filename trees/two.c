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

void inOrder(struct node *root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

int nodeCount(struct node *root){
    if(root!=NULL){
        count++;
        nodeCount(root->left);
        nodeCount(root->right);
    }
    return count;
}

void main(){
    int n,arr[100];
    struct node *temp;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(int i=0;i<n;i++){
        // scanf("%d",&arr[i]);
        arr[i]=i;
    }
    temp=insert(arr,0,n);
    printf("Elements are :- ");
    inOrder(temp);
    printf("\nTotal number of nodes are :- %d\n",nodeCount(temp));
}