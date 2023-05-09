#include<stdio.h>
void main(){
    int arr[2][2],i,j;
    int *ptr;
    printf("Enter the elements\n");
    for(i=0;i<2;i++){
         for(j=0;j<2;j++){
             scanf("%d",&arr[i][j]);
         }
    }
    printf("2D array elements are\n");
    //     for(i=0;i<2;i++){
    //      for(j=0;j<2;j++){
    //          printf("%d ",arr[i][j]);
    //      }
    //      printf("\n");
    // }

    // ******************Using pointers**********
    for(ptr=arr;ptr<=&arr[1][1];ptr++){
          printf("%d ",*ptr);
    }
}