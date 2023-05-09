#include<stdio.h>
void main()
{
    int a[50],n,x,num,i;
    printf("Enter the number of elements you want\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Entered elements are\n");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
    printf("\nEnter the position you want\n");
    scanf("%d",&x);
    printf("Enter the number you want to push on that position\n");
    scanf("%d",&num);
    a[n+1]=0;
    for(i=n-1;i>=x;i--){
            a[i+1]=a[i];
    }
    a[x]=num;
     printf("Entered final elements are\n");
     for(i=0;i<=n;i++){
        printf("%d  ",a[i]);
    }
    
}