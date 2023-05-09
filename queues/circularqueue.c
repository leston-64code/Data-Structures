#include<stdio.h>
#include<stdlib.h>


struct queue{
    int size,front,rear,*arr;
};

void enqueue(struct queue *q){
    int num;
    printf("Enter the element : ");
    scanf("%d",&num);
    if(q->rear==q->front-1 || (q->front==0 && q->rear==q->size-1)){
        printf("Queue overflow\n");
        return;
    }else if(q->front=q->rear==-1){
        q->front=q->rear=0;
        q->arr[q->rear]=num;
    }else if(q->front=q->rear==q->size-1){
        q->rear=0;
        q->arr[q->rear]=num;
    }else if(q->rear==q->size-1 && q->front!=0){
        q->rear=0;
        q->arr[q->rear]=num;
    }else{
        q->rear++;
        q->arr[q->rear]=num;
    }
}

void dequeue(struct queue *q){
    int val;
    if(q->front==-1){
        printf("Queue Underflow\n");
        return;
    }else if(q->front==q->rear){
        val=q->arr[q->front];
        q->front=q->rear=-1;
    }else if(q->front==q->size-1){
        val=q->arr[q->front];
        q->front==0;
    }else{
        val=q->arr[q->front];
        q->front++;
    }
    printf("Deleted element is %d\n ",val);
    return;
}


void display(struct queue *q){
    printf("Queue elements are : ");
    if(q->front<q->rear){
        for(int i=q->front;i<=q->rear;i++){
        printf("%d ",q->arr[i]);
    }
    }else{
        for(int i=q->front;i<q->size-1;i++){
             printf("%d ",q->arr[i]);
        }
        for(int i=0;i<=q->rear;i++){
        printf("%d ",q->arr[i]);
    }
    }
    printf("\n");
}

void main(){
    struct queue q;
    q.rear=q.front=-1;
    int choice;
    printf("Enter the size of queue you want : ");
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
                    printf("Rear = %d\n",q.rear);
                    printf("Front = %d\n",q.front);
                    break;
            case 2 :dequeue(&q);
                    printf("Rear = %d\n",q.rear);
                    printf("Front = %d\n",q.front);
                    break;
            case 3 :display(&q);
                    break;
            case 4 :exit(0);

            default:printf("Invalid choice\n");
                    break;
        }
    }
}