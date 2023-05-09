#include<stdio.h>

void display(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int partition(int arr[],int low,int high){
    int temp;
    int pivot=arr[low];
    int i=low;
    int j=high;
while(i<j){
        while(arr[i]<=pivot){
        i++;
    }
    while(arr[j]>pivot){
        j--;
    }
    if(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
    temp=arr[j];
    arr[j]=arr[low];
    arr[low]=temp;
    return j;
}

void quickSort(int arr[],int low,int high){
    int partitionIndex;
    if(low<high){
        partitionIndex=partition(arr,low,high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
    }
}

void main(){
    int arr[]={23,5,6,41,98,55,98,454,3,54,5468,745,48,765,165,16,565,6,5,4768,4,65165,795,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    quickSort(arr,0,n-1);
    display(arr,n);
}