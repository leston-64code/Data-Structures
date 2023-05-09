#include<stdio.h>
void main(){
    char arr[20];
    int i=0,n=0;
    printf("Enter the number of names you want\n");
    scanf("%d",&n);
    printf("Enter %d names",n);
    for(i=0;i<n;i++){
        scanf("%s",arr[i]);
    }   
    printf("Array elements are\n");
    for(i=0;i<n;i++){
        printf("%s \t",arr[i]);
    }
}