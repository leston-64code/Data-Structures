#include<stdio.h>

void display(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void insertionSort(int *arr,int n){
    int key,j;
    for(int i=1;i<=n-1;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void main(){
    // int arr[]={21,54,46,74,4,5354,68,178,1,4,74,41,374,13};
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    insertionSort(arr,n);
    display(arr,n);
}