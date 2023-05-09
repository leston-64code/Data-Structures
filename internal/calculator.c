#include<stdio.h>
#include<stdlib.h>
void main()
{
    float a,b ,res;
    char option;
    printf("Enter the value of 2 numbers a and b\n");
    scanf("%f%f",&a,&b);
    printf("\nEnter the operation you want to perfrom on the numbers\n ");
    printf("\t Options \n");
    printf("\t 1.Addition(+)\n\t 2.Substractin(-) \n\t 3.Multiplication(*)\n\t 4.Division \n");
    scanf("%s",&option);
    switch(option)
    {
        case '+':
            res=a+b;
            break;
        case '-':
            res=a-b;
            break;
        case '*':
            res=a*b;
            break;
        case '/':
          if(b==0){
            printf("\nCannot be divided by zero");
            exit(0);
          }
          else{
              res=a/b;
            break;
          }
        default:printf("Please enter valid choice\n");
        exit(0);
    }
    printf("\nThe resut of %f%c%f=%f ",a,option,b,res);
}