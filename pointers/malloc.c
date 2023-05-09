#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,*ptr;
    printf("Enter the size of array of you want\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n * sizeof(int));
    if(ptr==NULL){
        printf("Memory not allocated\n");
        exit(0);
    }else{
        printf("Memory successfully allocated\n");
        printf("Enter %d elements\n",n);
        for(int i=0;i<n;i++){
            scanf("%d",&ptr[i]);
        }
        printf("Entered elements are\n");
        for(int i=0;i<n;i++){
            printf("%d ",ptr[i]);
        }
    }
}