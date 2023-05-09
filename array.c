#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    int a[50],i,n;
    printf("Enter the length of array you want\n");
    scanf("%d",&n);
    printf("Enter %d elements in the array\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The elements in array are\n");
    for(i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
}
















































