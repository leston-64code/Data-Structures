#include<stdio.h>
int larger(int a[20],int n);
void main()
{
    int a[20],n,i,done;
    printf("Enter the size of elements you want\n");
    scanf("%d",&n);
    printf("Enter the elemetns of array you wnat\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    done=larger(a,n);
    printf("The largest elements in array is %d",done);
}
int larger(int a[20],int n){
    int max,i;
    max=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            
        }
    }
    return max;
}