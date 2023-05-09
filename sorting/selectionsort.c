#include<stdio.h>

void display(int *arr,int n){
    for( int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
}

void selectionSort(int *arr,int n){
    int smallestindex,temp;
    for(int i=0;i<n;i++){
        smallestindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestindex]){
                smallestindex=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[smallestindex];
        arr[smallestindex]=temp; 
    }
}

void main(){
    int a[]={1,45,54,54,741,74,87,7,4,54,42,47,4,4,1,4,45,4,4,46,4,416,5426,42,678,798,79,826,542275,4,2874,27,68,746,26,52,487,897,45465,489,486,24,842,8674,9842,894,8};
    int n=sizeof(a)/sizeof(a[0]);
    display(a,n);
    selectionSort(a,n);
    display(a,n);
}