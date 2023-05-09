#include<stdio.h>
#include<math.h>
void main(){
    int a[50],n,i,j,sum=0;
    printf("Enter the length of array you want");
    scanf("%d",&n);
    printf("Enter %d elemets \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
        if(a[j]%2==0){
        sum=sum+a[j];
        }
    }
    printf("Sum is %d",sum);
}