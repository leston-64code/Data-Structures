#include<stdio.h>
#include<stdlib.h>

// This code is working properly

struct queue{
    int size,front,rear,*arr;
};

int isFull(struct queue *q){
    if(q->rear==q->size-1){
        printf("Queue is full\n");
        return 1;
    }
    return 0;
}

int isEmpty(struct queue *q){
    if(q->front==-1 || q->front>q->rear){
        printf("Queue is empty\n");
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q){
    if(isFull(q)){
        return;
    }
    if(q->rear==-1){
        q->front++;
    }
    printf("Enter the element : ");
    q->rear++;
    scanf("%d",&q->arr[q->rear]);
}

void dequeue(struct queue *q){
    if(isEmpty(q)){
        return;
    }
    int num=q->arr[q->front];
    q->front++;
    printf("Deleted element is %d\n",num);
}



void display(struct queue *q){
    printf("Queue elements are : ");
    for(int i=q->rear;i>=q->front;i--){
        printf("%d ",q->arr[i]);
    }
}

void main(){
    struct queue q;
    q.rear=q.front=-1;
    int choice;
    printf("Enter the size of queue you want");
    scanf("%d",&q.size);
    q.arr=(int *)malloc(sizeof(int)*q.size);
    while(1){
        printf("\nMENU\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 :
                    enqueue(&q);
                    break;
            case 2 :dequeue(&q);
                    break;
            case 3 :display(&q);
                    break;
            case 4 :exit(0);

            default:printf("Invalid choice\n");
                    break;
        }
    }
}