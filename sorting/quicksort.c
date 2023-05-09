#include<stdio.h>

void display(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}


// int partition(int arr[],int low,int high){
//     int temp;
//     int pivot=arr[low];
//     int i=low+1;
//     int j=high;
// do{
//     while(arr[i]<=pivot){
//         i++;
//     }
//     while(arr[j]>pivot){
//         j--;
//     }
//     if(i<j){
//         temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//     }
//     }while(i<j);

//     // Swap arr[low] and arr[j]
//     temp=arr[low];
//     arr[low]=arr[j];
//     arr[j]=temp;
//     return j;
// }
int partition(int arr[],int low,int high){
    int temp;
    int pivot=arr[low];
    int left=low+1;
    int right=high;
do{
    while(arr[left]<=pivot){
        left++;
    }
    while(arr[right]>pivot){
        right--;
    }
    if(left<right){
        temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
    }
    }while(left<right);

    // Swap arr[low] and arr[j]
    temp=arr[low];
    arr[low]=arr[right];
    arr[right]=temp;
    return right;
}


void quickSort(int *arr,int low,int high){
    int partitionIndex;
    if(low<high){
        partitionIndex=partition(arr,low,high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
    }
}

void main(){
    int arr[]={45,4,868,657863,83635,35,4864,8478,654,84,4,7,457,5,465,544,798,5,4,4,54,4,7,1748,765,81};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    quickSort(arr,0,n-1);
    display(arr,n);
}