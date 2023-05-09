#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,a=5;
    for(i=5;i<=a;i--){
        if(i==1){
            exit(0);
        }
        for(j=5;j<=i;j--){
            if(j<i){
                break;
            }
            printf("*");
        }
        printf("\n");
    }
}