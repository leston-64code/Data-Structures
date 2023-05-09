#include<stdio.h>

void main(){
    int num,sum1=0,sum2=0,res;
    printf("Enter the number :");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        if(i%3==0){
            sum1=sum1+i;
        }
        if(i%5==0){
            sum2=sum2+i;
        }
    }
    printf("%d",sum1+sum2);
}