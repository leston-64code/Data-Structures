#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct queue{
    struct node *front;
    struct node *rear;
};

struct queue *enqueue(struct queue *q){
    int num;
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the element : ");
    scanf("%d",&num);
    newnode->data=num;
    if(q->front==NULL){

        newnode->next=NULL;
        q->front=newnode;
        q->rear=newnode;
    }else{
        newnode->next=NULL;
        q->rear->next=newnode;
        q->rear=newnode;
    }
    return q;
}

struct queue *dequeue(struct queue *q){
    struct node *temp;
    if(q->front==NULL){
        printf("Queue is empty\n");
        return q;
    }
    temp=q->front;
    q->front=q->front->next;
    printf("Deleted element is %d\n",temp->data);
    free(temp);
    return q;
}

void display(struct queue *head){

    // This below code was not working so i implemented the ptr method by refering the null pdf

    // if(head->front==NULL){
    //     printf("Queue is empty\n");
    //     return;       
    // }
    // printf("Elements are\n");
    // while(head->rear->next!=NULL){
    //     printf("%d ",head->rear->data);
    //     head->rear=head->rear->next;
    // }
    


    struct node *ptr;
    ptr=head->front;
    if(ptr==NULL){
        printf("Queue is empty\n");
        return;
    }else{
        while(ptr!=NULL){
            printf("%d\t", ptr -> data);
            ptr = ptr -> next;
        }
    }


    // Now this code was written after understanding the code using ptr ie the above one 
    // This is the  rectified code of my method
    // This code will work fine but it will iterate the parent queue and you will entirely destroy the queue

    // if(head->front==NULL){
    //     printf("Queue is empty\n");
    //     return;       
    // }
    // printf("Elements are\n");
    // while(head->front!=NULL){
    //     printf("%d ",head->front->data);
    //     head->front=head->front->next;
    // }



}

void main(){
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    q->front=NULL;
    q->rear=NULL;
    int choice;
   
    while(1){
        printf("\nMENU\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                    q=enqueue(q);
                    break;
            case 2 :q=dequeue(q);
                    break;
            case 3 :display(q);
                    break;
            case 4 :exit(0);

            default:printf("Invalid choice\n");
                    break;
        }
    }
}