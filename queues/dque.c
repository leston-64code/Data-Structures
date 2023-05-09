#include<stdio.h>
#include<stdlib.h>

int dque[5],left=-1,right=-1;
int max=5;

void insertRight(){
    int num;
    if((left==0 && right==max-1) || right==left-1){
        printf("Overflow condition\n");
        return;
    }else{
        printf("Enter the number\n");
        scanf("%d",&num);
        if(left==-1){
            left=0;
            right=0;
        }else if(left!=0 && right==max-1){
            right=0;
        }else{
            right++;
        }
        dque[right]=num;
    }
}

void insertLeft(){
    int num;
    if((left==0 && right==max-1) || left==right+1){
        printf("Overflow condition\n");
        return;
    }else{
        printf("Enter the number\n");
        scanf("%d",&num);
        if(left==-1){
            left=0;
            right=0;
        }else if(left==0){
            left=max-1;
        }else{
            left--;
        }
        dque[left]=num;
    }
}


void deleteLeft(){
    int res;
    if(left==-1){
        printf("Underflow condition\n");
        return;
    }else{
        if(left==right){
            res=dque[left];
            left=right=-1;
        }else if(left==max-1){
            res=dque[left];
            left=0;
        }else{
            res=dque[left];
            left++;
        }
        printf("Deleted element is %d\n",res);
    }
}

void deleteRight(){
    int res;
    if(left==-1){
        printf("Underflow condition\n");
        return;
    }else{
        if(left==right){
            res=dque[left];
            left=right=-1;
        }else if(right==0){
            res=dque[right];
            right=max-1;
        }else{
            res=dque[right];
            right--;
        }
        printf("Deleted element is %d\n",res);
    }
}

void display(){
    int front=left,rear=right;
    if(front==-1){
        printf("Underflow \n");
        return;
    }else{
        if(front<=rear){
            while(front<=rear){
                printf("%d ",dque[front]);
                front++;
            }
            printf("\n");
        }else{
            while(front<=max-1){
                printf("%d ",dque[front]);
                front++;
            }
            front=0;
            while(front<=rear){
                printf("%d ",dque[front]);
                front++;
            }
            printf("\n");
        }
    }
}

void inputRestricted(){
    int option;
    while(1){
        printf("1.Insert Right\n2.Delete Right\n3.Delete Left\n4.Display\n5.Exit\n");
        printf("Enter you choice\n");
        scanf("%d",&option);
        switch(option){
            case 1:insertRight();
                    break;
            case 2:deleteRight();
                    break;
            case 3:deleteLeft();
                    break;
            case 4:display();
                    break;
            case 5:exit(0);
            default:printf("Invalid choice\n");
                    break;
                    
        }
    }
}

void outputRestricted(){
    int option;
    while(1){
        printf("1.Insert Right\n2.Insert Left\n3.Delete Right\n4.Display\n5.Exit\n");
        printf("Enter you choice\n");
        scanf("%d",&option);
        switch(option){
            case 1:insertRight();
                    break;
            case 2:insertLeft();
                    break;
            case 3:deleteRight();
                    break;
            case 4:display();
                    break;
            case 5:exit(0);
            default:printf("Invalid choice\n");
                    break;
                    
        }
    }
}



void main(){
    int ch;
    while(1){
         printf("1.Input Restricted\n2.Output Restricted\n3.Exit\n");
        printf("Enter you choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1 : inputRestricted();
                    break;

            case 2:outputRestricted();
                    break;

            case 3:exit(0);
            
            default:printf("Invalid choice\n");
                    break;
               
        }
    }
}