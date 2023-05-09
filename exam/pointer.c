#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
    {
       int a=100;
       int *ptr1;
       int **ptr2;
       ptr1=&a;
       ptr2=&ptr1;
       printf("Address of a %d\n",&a);
       printf("Address inside ptr1 %d\n",ptr1);
       printf("Address inside ptr2 %d\n",ptr2);
       printf("value inside ptr2 %d\n",**ptr2);
       printf("value inside ptr1 %d\n",*ptr1);
    }
    
