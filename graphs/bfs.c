#include<stdio.h>
#include<stdlib.h>

struct queue{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}

int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q,int val){
    if(isFull(q)){
        printf("Queue overflow\n");
    }else{
        q->r++;
        q->arr[q->r]=val;
    }
}
int dqueue(struct queue *q){
    if(isEmpty(q)){
        printf("Queue is empty\n");
    }else{
        q->f++;
      return q->arr[q->f];
    }
}

void main(){
    struct queue q;
    q.size=400;
    q.f=q.r=-1;
    q.arr=(int *)malloc(q.size*sizeof(int));
    // if(isEmpty(&q)){
    //     printf("Queue is empty\n");
    // }
    // enqueue(&q,45);
    // enqueue(&q,12);

    // printf("Dequeing element %d \n",dqueue(&q));
    // printf("Dequeing element %d \n",dqueue(&q));
    //     if(isEmpty(&q)){
    //     printf("Queue is empty\n");
    // }
    
    int u;
    int i=0;
    int visited[7]={0,0,0,0,0,0,0};
    int a[7][7]={
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0}
    };

    printf("")

}