#include<stdio.h>
void main()
{
    int age;
    printf("Enter your age \t");
    scanf("%d",&age);
    if(age>=18)
    { 
        printf("Your are eligible for voting");
    }else{
        printf("You are not eligible for voting");
    }

}