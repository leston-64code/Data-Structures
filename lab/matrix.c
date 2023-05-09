#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{   
    int a[50][50],b[50][50],c[50][50];
    int m,n,p,q,i,j,k;
    printf("Enter the order of matrix a : ");
    scanf("%d%d",&m,&n);
    printf("Enter the order of matrix b : ");
    scanf("%d%d",&p,&q);
      if(n!=p){
        printf("Matrix multiplication not possible");
        exit(0);
    }
    printf("Enter the elemets of matrix a\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elemets of matrix b\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }
  
    printf("Matrix A is displayed as \n");
      for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matrix B is displayed as \n");
      for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("******** MATRIX MULTIPLICATON *********\n");
     for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            c[i][j]=0;
            for(k=0;k<n;k++){
                c[i][j]= c[i][j]+a[i][k]*b[k][j];
            }
     }
  }

  printf("The product of matrix A and matrix B is\n ");
  for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}