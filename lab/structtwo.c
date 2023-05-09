#include<stdio.h>
#include<string.h>
struct student {
    char name[20];
    int rollno;
    int marks;
    char grade[5];
};
void main(){
    int n=0,i=0;
     struct student s[20];
    float avg=0,sum=0;
    char sname[20];
    printf("Enter the number of students you want : ");
    scanf("%d",&n);
  
    for(i=0;i<n;i++){
        printf("Enter the student %d details \n ",i+1);
        printf("Enter the name of student: ");
        scanf("%s",s[i].name);
        printf("Enter the rollno: ");
        scanf("%d",&s[i].rollno);
        printf("Enter the marks: ");
        scanf("%d",&s[i].marks);
        printf("Enter the grade: ");
        scanf("%s",s[i].grade);
        sum=sum+s[i].marks;
    }
    printf("The students you entered are as follows\n");
    printf("Name \t\tRollno \tMarks \tGrade\n");
    for(i=0;i<n;i++){
        printf("%s \t\t%d \t%d \t%s",s[i].name,s[i].rollno,s[i].marks,s[i].grade);
    }
}