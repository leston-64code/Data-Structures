#include<stdio.h>
#include<math.h>
void main()
{
    char name[20];
    int units,mtc=100;
    float charge,total;
    printf("Enter the name of the user\n");
    scanf("%s",name);
    printf("Enter the units consumed\n");
    scanf("%d",&units);
    if(units<200){
        charge=units*0.80;
        total=charge+mtc;
    }else if(units>200 && units<=300){
        charge=200*0.80+(units-200)*0.90;
        total=charge+mtc;
    }else{
        charge=200*0.80+(100*0.90)+(units-300)*1;
        total=charge+mtc;
    }
    if(total>400){
        total=total+(total*0.15);
    }
    printf("Total charge to be paind is : %f",total);
}