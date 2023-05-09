// predict the output
#include<stdio.h>
void main(){
    int i=1;
    int *p=&i,*q;
    q=p;
    *q=5;
    printf("%d ",*p);
}