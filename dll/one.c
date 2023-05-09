#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct professor{
    int id;
    char name[15];
    char branch[15];
    char specialization[20];
    struct professor *nextlink;
    struct professor *prelink;
};

struct professor *front=0;
    struct professor *temp;

void enqueue(int id,char name[15],char branch[15],char specialization[20]){
    struct professor *newprofessor=(struct professor *)malloc(sizeof(struct professor));

    newprofessor->id=id;
    strcpy(newprofessor->name,name);
    strcpy(newprofessor->branch,branch);
    strcpy(newprofessor->specialization,specialization);
    if(front==NULL){
        newprofessor->prelink=newprofessor;
        newprofessor->nextlink=NULL;
        temp=newprofessor;
        front=temp;
    }else{
        temp->nextlink=newprofessor;
        newprofessor->nextlink=NULL;
        newprofessor->prelink=temp;
        temp=newprofessor;
    }
}

void display(struct professor *head){
    printf("ID\tName\tBranch\tSpecialization\n");
    while (head!=NULL)
    {
        printf("%d\t%s\t%s\t%s\n",head->id,head->name,head->branch,head->specialization);
        head=head->nextlink;
    }
    
}

int checknodes(struct professor *head){
    int nodes=0;
    while(head!=NULL){
        head=head->nextlink;
        nodes++;
    }
    return nodes;
}

void main(){
    int id,n,ch,res;
    char name[15],branch[15],specialization[20];
    while(1){
        printf("\nEnter your choices\n");
    printf("1.enqueue\n2.display\n3.check nodes\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1: printf("Enter the number of professors\n");
            scanf("%d",&n);
            for(int i=0;i<n;i++){
                printf("\nEnter the details of professor %d\n",i+1);
                printf("Enter ID , Name , Branch , Specialization\n");
                scanf("%d %s %s %s",&id,name,branch,specialization);
                enqueue(id,name,branch,specialization);
            }
            break;

    case 2:display(front);
            break;

    case 3: res=checknodes(front);
            printf("No of nodes : %d\n",res);
            break;

    default:printf("Invalid choice\n");
        break;
    }
    }
}