#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct dob{
    int day;
    int month;
    int year;
};
struct employee{
    int empno;
    char name[20];
    int age;    
    int salary;  
    struct dob date;   
};
void main(){
    struct employee e;
    printf("Enter the employee number ");
    scanf("%d",&e.empno);
    printf("Enter the employeee name  ");
    scanf("%s",e.name);
    printf("Enter the employee salary");
    scanf("%d",&e.salary);
    printf("Enter the employee age");
    scanf("%d",&e.age);
    printf("Enter the employee date of birth in order of day,month,year :-");
    scanf("%d%d%d",&e.date.day,&e.date.month,&e.date.year);
    printf("Number\tName\tAge\tSalary\tDOB\n");
    printf("%d\t%s\t%d\t%d\t%d-%d-%d",e.empno,e.name,e.age,e.salary,e.date.day,e.date.month,e.date.year);
}