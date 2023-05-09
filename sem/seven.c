#include<stdio.h>
#include<math.h>
struct student{
    char name[20];
    int rollno;
    char grade[1];
    int marks;
};

void main(){
    struct student s[20];
    char sname[20];
    char sgrade[1];
    float sum=0,avg;
    int n,i;
    printf("Enter the number of students");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the student %d details\n",i+1);
        printf("Enter the name\n");
        scanf("%s",s[i].name);
        printf("Enter the roll no\n");
        scanf("%d",&s[i].rollno);
        printf("Enter the marks\n");
        scanf("%d",&s[i].marks);
        printf("Enter the grade\n");
        scanf("%s",s[i].grade);
        sum=sum+s[i].marks;
    } 
    avg=sum/n;
    printf("Detalis of students are \n");
    printf("Name\tRollno\tMarks\tGrade\n");
    for(i=0;i<n;i++){
        printf("%s\t%d\t%d\t%s\n",s[i].name,s[i].rollno,s[i].marks,s[i].grade);
    }
    
}