#include<stdio.h>


// ************EXPLANATION***************
// an bubble sort algorith runs for size-1 passes and at last pass size-(size-1) comparision is done ie only one comparision is done
// first for loop is for no of passes and second for loop is for no of comparisions

// ***************OPTIMISATION***************
// if an array gets sorted at say x pass we need not to go till size-1 passes 
// we can use the below is sorted techinique  to that if issorted is 1 then it is sorted else it is not sorted . If its sorted then it will never enter the loop so the is sorted will remain one and we can know that it is already sorted 



void display(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void bubbleSort(int *arr,int n){
    int temp;
    int isSorted=0;
    for(int i=0;i<n-1;i++){
        isSorted=1;
        printf("Woring on pass %d\n",i);
        for(int j=0;j<n-1-i;j++){ //no of passes
            if(arr[j]>arr[j+1]){  //no of comparisions
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                isSorted=0;
            }
        }
        if(isSorted){
            return;
        }
    }
}

void main(){
    int arr[]={1,2,54,49,654,498,5,4,74,44,74,984,54,6,746,6,656,5,47,154,844,178,6,4,4156,741,684,651,7,41,};
    display(arr,30);
    bubbleSort(arr,30);
    display(arr,30);
}