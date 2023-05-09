#include<stdio.h>
#include<stdlib.h>
struct queue{
    int *arr;
    int front;
    int rear;
    int size;
};

int isFull(struct queue *q){
    if(q->rear==q->size-1){
        return 1;
    }
    return 0; 
}

int isEmpty(struct queue *q){
    if(q->rear==q->front){
        return 1;
    }
    return 0; 
}

void enqueue(struct queue *q,int value){
    if(isFull(q)){
        printf("Queue is Full\n");
    }else{
        q->rear++;
        q->arr[q->rear];
    }
}


int dqueue(struct queue *q){
    if(isEmpty(q)){
        printf("Queue is empty\n");
    }else{
        q->front++;
        return q->arr[q->front];
    }
}

void main(){
    struct queue q;
    q.front=q.rear=-1;
    q.size=5;
    q.arr=(int *)malloc(sizeof(q.size*sizeof(int)));
    enqueue(&q,45);
    enqueue(&q,8);
    enqueue(&q,35);
    enqueue(&q,856);
    enqueue(&q,987);
    enqueue(&q,987);
    dqueue(&q);
        enqueue(&q,987);
}