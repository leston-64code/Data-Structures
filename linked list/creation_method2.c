#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *ptr;
} first ,second, third;

void main(){
    first.data=10;
    first.ptr=&second;

    second.data=20;
    second.ptr=&third;

    third.data=30;
    third.ptr=NULL;
}