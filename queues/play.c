#include<stdio.h>
#include<stdlib.h>

int queue[5],front=-1,rear=-1,max=5;

void insert(){
    int num;
    if(front==0 && rear==max-1 || (rear==front-1)){
        printf("Overflow Condition\n");
        return;
    }else{
        printf("Enter the data :");
        scanf("%d",&num);
        if(front==-1 && rear==-1){
            front=rear=0;
        }else if(front!=0 && rear==max-1){
            rear=0;
        }else{
            rear++;
        }
        queue[rear]=num;
    }
}

void delete(){
    int res;
    if(front==-1){
        printf("Underflow condition\n");
        return;
    }else{
        if(front==rear){
            res=queue[front];
            front=rear=-1;
        }else if(front==max-1){
            res=queue[front];
            front=0;
        }else{
            res=queue[front];
            front++;
        }
        printf("Deleted element is %d\n",res);
    }
}

void display(){
    if(front==-1){
        printf("Underflow condition\n");
        return;
    }else{
        if(front<=rear){
            for(int i=front;i<=rear;i++){
                printf("%d ",queue[i]);
            }
        }else{
            for(int i=front;i<=max-1;i++){
                printf("%d ",queue[i]);
            }
            for(int i=rear;i<front;i++){
                printf("%d ",queue[i]);
            }
        }
    }
}

void main(){
    int choice;
    while(1){
        printf("\nMENU\n");
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1: insert();
                    printf("rear = %d\n",rear);
                    printf("front = %d\n",front);
                    break;
            case 2: delete();
                    printf("rear = %d\n",rear);
                    printf("front = %d\n",front);
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default:printf("Invalid choice\n");
                    break;
                    
        }
    }
}