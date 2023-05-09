#include<stdio.h>
#include<math.h>
void swap(int *a,int *b);
void main()
{
    int a,b;
    printf("Enter values of a and b\n");
    scanf("%d%d",&a,&b);
    printf("Values of a and b before swapping a=%d  b=%d\n",a,b);
    swap(&a,&b);
     printf("Values of a and  b after swapping a=%d  b=%d",a,b);
}

void swap(int *a,int *b){
    int temp;
        temp =*a;
    *a=*b;
    *b=temp;
}