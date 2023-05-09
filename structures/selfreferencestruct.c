#include<stdio.h>
struct node{
    int a;
    int b;
    int c;
    struct node *ptr;
};
void main(){
    struct node var1;
    struct node var2;
    var1.a=10;
    var1.b=20;
    var1.c=30;
    var1.ptr=&var2;
    var2.a=40;
    var2.b=50;
    var2.c=60; 
    var2.ptr=NULL;  
    printf("%d %d %d",var1.ptr->a,var1.ptr->b,var1.ptr->c);
}