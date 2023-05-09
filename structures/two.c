#include<stdio.h>
struct employee{
    char *name;
    int age;
    int salary;
    char *role;
};

// void main(){
//     struct employee emp1;
//     emp1.name="Leston Aaron Salis";
//     emp1.age=25;
//     emp1.salary=500000;
//     emp1.role="Programmer";
//     printf("Employee details are\nName : %s\nAge : %d\nSalary : %d\nRole : %s\n",emp1.name,emp1.age,emp1.salary,emp1.role);
// }

void main(){
    struct employee emp1;
    struct employee emp2;
    emp1.name="Leston Aaron Salis";
    emp1.age=25;
    emp1.salary=500000;
    emp1.role="Programmer";
    emp2.name="Steevel Sharon Salis";
    emp2.age=45;
    emp2.salary=45000;
    emp2.role="Software developer";

    printf("Employee details are\n\nName : %s\nAge : %d\nSalary : %d\nRole : %s\n",emp1.name,emp1.age,emp1.salary,emp1.role);
     printf("\nName : %s\nAge : %d\nSalary : %d\nRole : %s\n",emp2.name,emp2.age,emp2.salary,emp2.role);
}



// *********************************************************
// we can also declare the structure varialbe like this also
// struct employee{
//     char *name;
//     int age;
//     int salary;
//     char *role;
// }emp1;