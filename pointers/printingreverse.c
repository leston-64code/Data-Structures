#include<stdio.h>
void main(){
    int arr[]={1,2,65,65,465,46,871,54,1,514,1,4,5};
    int *ptr=&arr[(sizeof(arr)/sizeof(arr[0]))-1];
    for(ptr;ptr>=&arr[0];ptr--){
        printf("%d ",*ptr);
    }
}