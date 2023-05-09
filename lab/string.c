#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void  compare(char str1[50],char str2[50]);
void  concatenate(char str1[50],char str2[50]);
void  stringlength(char str1[50]);
void main()
{
    char  str2[50],str1[50];
    int choice;
    do{
        printf("\nStirng opertaions\n");
        printf("\tCompare \tcontaenate \tlength \t exit\n ");
        printf("Enter choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("enter two strings\n");
            scanf("%s%s",str1,str2);
            compare(str1,str2);
            break;
            case 2: printf("enter two strings\n");
            scanf("%s%s",str1,str2);
            concatenate(str1,str2);
            break;
            // case 3: printf("enter a strings\n");
            // scanf("%s",str1);
            // stringlength(str1);
            // break;
            default:printf("You enterd wrong chcoice\n");
            break;
        }
    }while(!(choice==4));

}

void  compare(char str1[50],char str2[50]){
    int len1,len2,i=0,flag;
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1!=len2){
        printf("Strings are diffrent\n");
        
    }
   else{
     for(i=0;str1[i]!='\0';i++){
        if(str1[i]!=str2[i]){
            flag=0;
        }
    }
    if(flag==0){
        printf("Strings are diffrent");
    }else {
        printf("Srings are same");
    }
   }
}

void  concatenate(char str1[50],char str2[50]){
    char str3[100];
    int k=0,i=0;
    for(i=0;str1[i]!='\0';i++){
        str3[i]=str1[i];
        k=k+1;
    }
    for(i=0;str2[i]!='\0';i++){
        str3[k]=str2[i];
        k=k+1;
    }
    str3[k]='\0';
    printf("\n%s",str3);
}