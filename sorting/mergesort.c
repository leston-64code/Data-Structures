#include<stdio.h>

void display(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void merge(int arr[],int mid,int low,int high){
    int i,j,k,b[100];
    i=k=low;
    j=mid+1;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            k++;i++;
        }else{
            b[k]=arr[j];
            k++;j++;
        }
    }
    while(i<=mid){
        b[k]=arr[i];
        i++;k++;
    };
    while(j<=high){
        b[k]=arr[j];
        j++;k++;
    };
    for(i=low;i<=high;i++){
        arr[i]=b[i];
    }
}


void mergeSort(int arr[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,mid,low,high);
    }
}

void main(){
    int arr[]={12,23,45,56,7,88,9,465,718,4,14,2454,87,726};
    int low=0,n=sizeof(arr)/sizeof(arr[0]);
    int high=n-1;
    display(arr,n);
    mergeSort(arr,low,high);
    display(arr,n);
    // int mid=(low+high)/2;
    // mergeSort(arr,mid,low,high);
}