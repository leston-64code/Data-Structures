#include<stdio.h>
#include<math.h>
void main(){
    char name[20];
    int units , mtc=100;
    float charge, total ;
    printf("Enter the name of customer ");
    scanf("%s" , name);
    printf("Enter the number of units consumed ");
    scanf("%d",&units);
    if(units<=200){
        charge=units*0.8;
        total=mtc+charge;
    }else if(units>200 && units <=300){
        charge=units*0.8+(units-200)*0.9;
        total=charge+mtc;
    }else{
        charge=units*0.8+units*0.9+(units-300)*1;
        total=mtc+charge;
    }
    if(total>400){
        total=total+(total*0.15);
        printf("The total amount to be paid by %s is %f",name,total);
    }else{
       printf("The total amount to be paid by %s is %f",name,total) ;
    }
}