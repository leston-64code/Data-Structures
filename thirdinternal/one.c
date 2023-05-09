#include<stdio.h>
#include<math.h>
// int add(int a ,int b);
void add(int a ,int b);
void main()
{
    int a,b,sum;
    printf("Enter two numbers whose sum you want to find\n");
    scanf("%d%d",&a,&b);
    printf("Entered numbers are %d ,%d\n",a,b);
    // sum=add(a,b);
    add(a,b);
    // printf("The sum of two numbers is =%d",sum);
}
// int add(int a, int b){
//     int x;
//     x=a+b;
//     return  x;
// }
void add(int a, int b){
    int x;
    x=a+b;
    printf("Sum is %d",x);
}