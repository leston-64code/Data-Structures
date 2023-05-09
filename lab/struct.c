#include<stdio.h>
#include<string.h>
struct student{
    char name[20];
    int rollno;
    int marks;
    char grade[5];
};
void main(){
    int n,i;
    
    struct student s[20];
    char sname[20];
    float sum=0,avg=0;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    for(i<0;i<n;i++){
        printf("Enter the student %d details\n",i+1);
        printf("Enter the student name  ");
        scanf("%s",s[i].name);
        printf("Enter the student rollno\n");
        scanf("%d",&s[i].rollno);
        printf("Enter the student marks\n");
        scanf("%d",&s[i].marks);
        printf("Enter the student grade\n");
        scanf("%s",s[i].grade);
        sum =sum+s[i].marks;
    }
    avg=sum/n;
    printf("The class average marks is %f ",avg);
    printf("\nEntered student details are as follows\n");
    printf("\tName \tRollno \tMarks \tGrade");
    for(i=0;i<n;i++){
        printf("\n\t%s \t%d \t%d \t%s\n",s[i].name,s[i].rollno,s[i].marks,s[i].grade);
    }
    printf("The student who scored above avg is\n ");
    for(i=0;i<n;i++){
        if(s[i].marks>avg){
            printf("\tName \tRollno \tMarks \tGrade");
             printf("\n\t%s \t%d \t%d \t%s",s[i].name,s[i].rollno,s[i].marks,s[i].grade);
        }
    }
       printf("\nThe student who scored below avg is \n ");
    for(i=0;i<n;i++){
        if(s[i].marks<avg){
            printf("\tName \tRollno \tMarks \tGrade");
             printf("\n\t%s \t%d \t%d \t%s",s[i].name,s[i].rollno,s[i].marks,s[i].grade);
        }
    }
}