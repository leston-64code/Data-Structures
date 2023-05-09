#include<stdio.h>
void main(){
    int a[]={12,45,5,65,78,98,54,54,22},*ptr;
    ptr=&a[3];
    printf("%d ",*ptr);
    printf("%d ",*(++ptr));
    printf("%d ",*(--ptr));
    printf("%d ",*(ptr++));
    printf("%d ",*(ptr--));
}