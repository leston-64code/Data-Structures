#include<stdio.h>
#include<math.h>
void main(){
    int a[50], n,i,key,mid,low,high,flag=0,j,sum=0;
    printf("Enter the length of array you want : ");
    scanf("%d",&n);
    printf("Enter %d elements in ascending  order",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // printf("Enter the element to be searched ");
    // scanf("%d",&key);
    // low=0;
    // high=n-1;
    // while(low<=high){
    //     mid=(low+high)/2;
    //     if(key==a[mid]){
    //         flag=1;
    //         break;
    //     }else{
    //         if(key>a[mid]){
    //             low=mid+1;
    //         }else{
    //             high=mid-1;
    //         }
    //     }
    // }
    // if(flag==1){
    //     printf("Element found at position %d",mid+1);
    // }else{
    //     printf("Element not found");
    // }
    for(j=0;j<n;j++){
        if(a[j]%2==0){
        sum=sum+a[j];
        }
    }
    printf("Sum is %d",sum);
}

