#include<stdio.h>
#include<math.h>
void main(){
    int a[10];
    int n,i,j,temp;
    printf("Enter the number of elements you want\n");
    scanf("%d",&n);
    printf("Enter %d elemens\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Original array is \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nSorted array is \n");
   for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}