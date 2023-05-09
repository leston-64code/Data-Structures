#include<stdio.h>
#include<math.h>
int add();
void main()
{
    int x;
  x=  add();
  printf("The sum is %d",x);
}
int add(){
    int a,b,c;
    printf("Enter two numbers please\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
    // printf("The sum of two numbers %d + %d =%d",a,b,c);
    
}