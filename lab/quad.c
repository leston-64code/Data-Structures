#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main(){
    float a,b,c,x1,x2,disc;
    printf("Enter two numbers a and b and c\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0){
        printf("This is not a quadratic equation\n");
        exit(0);
    }
    disc=b*b-4*a*c;
    if(disc>0){
        printf("Roots are real and distinct\n");
        x1=((-b)+sqrt(disc))/(2*a);
        x2=((-b)-sqrt(disc))/(2*a);
        printf("Root 1 =%f \t Root 2 = %f\n",x1,x2);
    }
    else if(disc==0){
        printf("Roots are real and equal\n");
        x1=(-b)/(2*a);
      printf("Root 1 =%f \t Root 2 = %f\n",x1,x1);
    }
    else{
        printf("Roots are imagenary\n");
       x1=(-b)/(2*a);
       x2=sqrt(fabs(disc))/(2*a);
       printf("Root 1 = %f + i%f  Roots 2 = %f - i%f",x1,x2,x1,x2);
    }
}
