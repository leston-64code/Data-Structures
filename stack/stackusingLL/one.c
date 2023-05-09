#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *top=-1;


struct node *createStack(struct node *head,int size){
    int val;
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    for(int i=0;i<size;i++){
        if(i==0){
            printf("Enter value of head node\n");
            scanf("%d",&val);
            head->data=val;
            top++;
            if(size==1){
                head->next=NULL;
                return head;
            }
            head->next=NULL;
            temp=head;
        }else{
            printf("Enter the element for %d node\n",i+1);
            scanf("%d",&val);
            struct node *newnode=(struct node*)malloc(sizeof(struct node));
            top++;
            newnode->data=val;
            newnode->next=temp;
            temp=newnode;
        }
    }
    return temp;
}

void display(struct node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}

struct node *popStack(struct node *ptr){
    struct node *temp;
    temp=ptr->next;
    free(ptr);
    return temp;
}

int peekStack(struct node *ptr,int pos){
   struct node *pointer=ptr;
   for(int i=0;(i<pos-1 && pointer!=NULL);i++){
    pointer=pointer->next;
   }
   if(pointer!=NULL){
    return pointer->data;
   }
}

void main(){
    int n;
    struct node *num;
    struct node *head=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number of nodes you want\n");
    scanf("%d",&n);
    num=createStack(head,n); 
    printf("Before Popping\n"); 
    display(num);
    num=popStack(num);
    printf("\nAfter Popping\n"); 
    display(num);
   int test=peekStack(num,2);
    printf("\nElement is %d\n",test);
}