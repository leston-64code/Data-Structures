#include<stdio.h>
void main(){
    int arr[]={5,2,4,8,4,465,4874,64,674,46,47,4,54,545,3,4,547,6,5},*ptr;
    int sum=0;
    // printf("%d\n",(sizeof(arr)/sizeof(arr[0]))-1);
    // for(ptr=&arr[0];ptr<&arr[sizeof(arr)/sizeof(arr[0])];ptr++){
    //     // printf("%d \n",*ptr);
    //     sum=sum+*ptr;
    // }
    // printf("The sum is %d",sum);

    // The below code will work because though we can use array name as pointer it is valid for only for first element address we cannot assign a new address like in below example ie a++ it is not valid we cannot assign a new address  
    // for(*arr;*arr<&arr[sizeof(arr)/sizeof(arr[0])];*arr++){
    //     sum+=*arr;
    // }


// *****************************************************
    // Insted we can do like this
    // If we give only array name it will give the base address of arrray
    // for(ptr=arr;ptr<&arr[sizeof(arr)/sizeof(arr[0])];ptr++){
    //     sum+=*ptr;
    // }
    // printf("%d\n",arr);
    // printf("sum is %d",sum);
}