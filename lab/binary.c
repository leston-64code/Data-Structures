#include<stdio.h>
#include<math.h>
void main(){
    int high,low ,mid,flag=0,n,i,key,a[100];
    printf("Enter the size of array you want\n");
    scanf("%d",&n);
    printf("Enter the elements in ascending order\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     printf("Enter the element to be searched : ");
    scanf("%d",&key);
     low=0;
    high=n-1;
   
       while(low<=high){
        mid=(low+high)/2;
        if(key==a[mid]){
            flag=1;
            break; ;
        }else{
            if(key>a[mid]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }
    if(flag==1){
        printf("Element %d found at position %d ",key,mid+1);
    }else{
        printf("Element not found \n");
    }
}