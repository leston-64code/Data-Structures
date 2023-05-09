#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert(struct node *root,int num){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=num;
    if(root==NULL){
        newnode->left=NULL;
        newnode->right=NULL;
        root=newnode;
    }else{
        if(num>root->data){
            root->right=insert(root->right,num);
        }else{
            root->left=insert(root->left,num);
        }
    }
    return root;
}

void inOrder(struct node *ptr){
    if(ptr!=NULL){
        inOrder(ptr->left);
        printf("%d ",ptr->data);
        inOrder(ptr->right);
    }
}

void preOrder(struct node *ptr){
    if(ptr!=NULL){
        printf("%d ",ptr->data);
        preOrder(ptr->left);
        preOrder(ptr->right);
    }
}

void postOrder(struct node *ptr){
    if(ptr!=NULL){
        postOrder(ptr->left);
        postOrder(ptr->right);
        printf("%d ",ptr->data);
    }
}

void display(struct node *temp){
    printf("Inorder : ");
    inOrder(temp);
    printf("\n");
    printf("Preorder : ");
    preOrder(temp);
    printf("\n");
    printf("Postorder : ");
    postOrder(temp);
    printf("\n");
}

void largestNode(struct node *root){
    int data;
    while(root!=NULL){
        data=root->data;
        root=root->right;
    }
    printf("Largest node = %d\n",data);
}

void smallestNode(struct node *root){
    int data;
    while(root!=NULL){
        data=root->data;
        root=root->left;
    }
    printf("Smallest node = %d\n",data);
}

int totalNodes(struct node *root){
    if(root==NULL){
        return 0;
    }else{
        return (totalNodes(root->left)+totalNodes(root->right)+1);
    }
}

void treeInfo(struct node *root){
    int total;
    largestNode(root);
    smallestNode(root);
    total=totalNodes(root);
    printf("Total nodes =%d\n",total);
}

void main(){
    int choice,n,arr[50];
    struct node *root=NULL;
    while(1){
        printf("\nMENU\n");
        printf("1.Insert\n2.Delete\n3.Display\n4.Tree Info\n5.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                    printf("Enter the size of array you want :");
                    scanf("%d",&n);
                    printf("Enter %d elements\n",n);
                    for(int i=0;i<n;i++){
                        scanf("%d",&arr[i]);
                    }
                    for(int i=0;i<n;i++){
                        root=insert(root,arr[i]);
                    }
                    break;
            
            case 3:display(root);
                    break;
            case 4:treeInfo(root);
                    break;
            default :printf("Invalid choice\n");
                    break;
        }
    }
}