// #include<stdio.h>
// void greatlarge(int a[],int n,int *min,int *max){
//     *min=*max=a[0];
//     for(int i=1;i<n;i++){
//         if(a[i]<*min){
//             *min=a[i];
//         }else if(a[i]>*max){
//             *max=a[i];
//         }
//     }
// }
// void main(){
//     int a[]={10,56,74,44,654,4,8,96,65,4,46,74,84,41,4,44,1,74,4,58,4,8,744,6,64,98,4,74,498,4,9,8,36,2,1,87,54},min,max,n;
//     n=sizeof(a)/sizeof(a[0]);
//     printf("%d %d \n",&max,&min);
//     greatlarge(a,n,&max,&min);
//     printf("Greatest element : %d\nSmallest element : %d",max,min);
// }

#include<stdio.h>
void greatlarge(int a[],int n,int *g,int *l){
    *l=*g=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<*l){
            *l=a[i];
        }else if(a[i]>*g){
            *g=a[i];
        }
    }
}
void main(){
    int a[]={10,56,74,44,654,4,8,96,65,4,46,74,84,41,4,44,1,74,4,58,4,8,744,6,64,98,4,74,498,4,9,8,36,2,1,87,54},min,max,n;
    n=sizeof(a)/sizeof(a[0]);
    printf("%d %d \n",&max,&min);
    greatlarge(a,n,&max,&min);
    printf("Greatest element : %d\nSmallest element : %d",max,min);
}