#include<stdio.h>
int *findMid(int array[],int n){
    return &array[n/2];
}
void main(){
    int arr[]={5,6,4,9,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int *mid=findMid(arr,n);
    printf("Middle element is %d",*mid);
}