#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,i;
    int *arr;
    printf("Enter the size of array you want\n");
    scanf("%d",&n);
    arr=(int *)malloc(n);
    if(arr==NULL){
        printf("Memory no allocated\n");
        exit(0);
    }else{
        printf("Enter %d elements\n",n);
        for(int i=0;i<n;i++){
            scanf("%d",arr+i);
        }
        printf("Entered elements are\n");
        for(int i=0;i<n;i++){
            printf("%d ",*(arr+i));
        }        
    }
    
}