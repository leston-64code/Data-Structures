#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main(){
    float a,b,c,x1,x2,disc;
    printf("Enter the values of a ,b and c ");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0){
        printf("Invalid opertion ");
        exit(0);
    }
    disc=b*b-4*a*c;
    if(disc>0){
        printf("Roots are real and distict\n");
        x1=((-b)+sqrt(disc))/(2*a);
        x2=((-b)-sqrt(disc))/(2*a);
        printf("Root 1 = %f \n Root 2 =%f ", x1,x2);
    }else if(disc=0){
        printf("Roots are real and equal\n");
        x1=(-b)/(2*a);
        printf("Root 1 = Root 2 =%f ", x1);
    }else{
        printf("Roots are imagenery\n");
        x1=(-b)/(2*a);
        x2=(sqrt(fabs(disc)))/(2*a);
        printf("Roots 1 is %f -i%f ", x1,x2);
        printf("Roots 2 is %f +i%f ", x1,x2);
    }
}