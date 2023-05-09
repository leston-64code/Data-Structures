#include<stdio.h>

void display(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
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
    int arr[]={12,2,34,54,54,654,2,41,41,85241,4,1,41,465,4,514,1,41,45435,5,4341,54,52,14,15,45,3545,745,2435,46,846,5465,89,7654,4,6814};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    insertionSort(arr,n);
    display(arr,n);
}