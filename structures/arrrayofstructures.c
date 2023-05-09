#include<stdio.h>
struct employee {
    // char *name;
    int age;
    int salary;
    char *role;
};
void main(){
    int n;
    struct employee emp[5];
    printf("Enter the number of employees\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        // printf("Enter the name of emp %d\n",i+1);
        // scanf("%s",&emp[i].name);
        printf("Enter the age of emp %d\n",i+1);
        scanf("%d",&emp[i].age);
        printf("Enter the role of emp %d\n",i+1);
        scanf("%s",&emp[i].role);
        printf("Enter the salary of emp %d\n",i+1);
        scanf("%d",&emp[i].salary);
    }
    // printf("Employee details are\n\nName\t\tAge\t\tSalary\t\tRole\n");
    printf("Employee details are\n\n\t\tAge\t\tSalary\t\tRole\n");
    for(int i=0;i<n;i++){
        // printf("%s\t\t%d\t\t%d\t\t%s\n",emp[i].name,emp[i].age,emp[i].salary,emp[i].role);
        printf("%d\t\t%d\t\t%s\n",emp[i].age,emp[i].salary,emp[i].role);
    }
}