#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    int priority;
    struct node *next;
};

struct node *insertNode(struct node *head){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    struct node *temp;
    int num,pri;
    printf("Enter data and the priority\n");
    scanf("%d %d",&num,&pri);
    newnode->data=num;
    newnode->priority=pri;
    if(head==NULL || head->priority>pri){
        newnode->next=head;
        head=newnode;
    }else{
        temp=head;
        while(temp->next!=NULL && temp->next->priority<=pri){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    return head;
}

void display(struct node *head){
    struct node *ptr;
    ptr=head;
    if(head==NULL){
        printf("Underflow condition\n");
        return;
    }else{
        while(ptr!=NULL){
            printf("\t%d[priority=%d]",ptr->data,ptr->priority);
            ptr=ptr->next;
        }
    }
}

struct node *deleteNode(struct node *head){
    struct node *ptr;
    if(head==NULL){
        printf("Underflow condition\n");
    }else{
        ptr=head;
        printf("Deleted element is %d\n",ptr->data);
        head=head->next;
        free(ptr);
    }
    return head;
}

void main(){
    struct node *queue=NULL;
    int choice;
    while(1){
        printf("\nMENU\n");
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1: queue=insertNode(queue);
                    break;
            case 2: queue=deleteNode(queue);
                    break;
            case 3:display(queue);
                    break;
            case 4:exit(0);
            default:printf("Invalid choice");
                    break;
        }
    }
}