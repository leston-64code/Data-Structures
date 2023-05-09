#include<stdint.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct employee{
    int empnumber;
    char name[20];
    int age;
    int salary;
};
void main(){
    struct employee e[20];
    int n,i;
    printf("Enter the number of employees ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter employee %d details\n",i+1);
        printf("Enter the employee name :-");
        scanf("%s",e[i].name);
        printf("Enter the employee age :-");
        scanf("%d",&e[i].age);
        printf("Enter the employee salary :-");
        scanf("%d",&e[i].salary);

    }
     printf("Number\tName\tAge\tSalary\n");
     for(i=0;i<n;i++){
        printf("%d\t%s\t%d\t%d\n",i+1,e[i].name,e[i].age,e[i].salary);
     }
}