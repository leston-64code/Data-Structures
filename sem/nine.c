#include<stdio.h>
#include<math.h>
void main(){
    float a[50],sum=0,sumvar=0,mean,sd,var;
    float *ptr;
    int n,i;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter %d elemnets\n",n);
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    ptr=a;
    for(i=0;i<n;i++){
        sum=sum+*ptr;
        ptr++;
    }
    mean=sum/n;
    for(i=0;i<n;i++){
        sumvar=sumvar+(pow((*ptr-mean),2));
        ptr++;
    }
    var=sumvar/n;
    sd=sqrt(var);
    printf("The sum is %f \n",sum);
    printf("The mean is %f \n",mean);
    printf("The standard deviation is %f \n",sd);
}