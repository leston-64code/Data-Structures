#include<stdio.h>
#include<stdlib.h>
#define max 5

int q[max];
int front=-1,rear=-1;
int item;

void insert(){
    if((front==0 && rear==max-1) || (rear==front-1)){
        printf("Overflow condition\n");
        return;
    }else {
        printf("Enter the element : ");
        scanf("%d",&item);
        if(front==-1 && rear==-1){
            front=0;
            rear=0;
            q[rear]=item;
        }else if(front!=0 && rear==max-1){
            rear=0;
            q[rear]=item;
        }else{
            q[++rear]=item;
        }
}
}

void display(){
    if(front==rear==-1){
        printf("Underflow condition\n");
        return;
    }else{
        printf("Elements are\n");
        for(int i=front;i<=rear;i++){
            printf("%d ",q[i]);
        }
        for(int i=rear;i<=front;i++){
            printf("%d ",q[i]);
        }
        printf("\n");
    }
}

void delete(){
    int num;
    if(front==rear==-1){
        printf("Undeflow condition\n");
        return;
    }else if(front==max-1){
        num=q[front];
        front=0;
    }else if(front==rear){
        num=q[front];
        front=rear=-1;
    }else{
        num=q[front]=num;
        front++;
    }
    printf("Deleted element is : %d\n",num);
}

void main(){
    int ch;
    while(1){
        printf("Menu\n");
        printf("1.Insert \n 2. Delete \n 3.Display \n 4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1 :insert();
                    break;
            case 2 :delete();
                    break;
            case 3 :display();
                    break;
            case 4 :exit(0);
                    break;
            default:printf("Invalid choice\n");
                    break;
        }
    }
}