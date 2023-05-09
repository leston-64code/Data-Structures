// *********HOLLOW SQUARE*************

// #include<stdio.h>
// void main(){
//      for(int i=0;i<4;i++){
//         for(int j=0;j<5;j++){
//             if(i>0 && i<=2){
//                 if(j>0 && j<=3){
//                     printf("  ");
//                 }else{
//                     printf("* ");
//                 }
//             }else{
//             printf("* ");
//             }

//         }
//         printf("\n");
//     }
   
// }


// *********EIGHT PATTERN*************
// #include<stdio.h>
// void main(){
//     for(int i=0;i<4;i++){
//         for(int j=0;j<5;j++){
//             if(i>0 && i<=2){
//                 if(j>0 && j<=3){
//                     printf("  ");
//                 }else{
//                     printf("* ");
//                 }
//             }else{
//             printf("* ");
//             }

//         }
//         printf("\n");
//     }
//     for(int i=0;i<4;i++){
//         for(int j=0;j<5;j++){
//             if(i>=0 && i<=2){
//                 if(j>0 && j<=3){
//                     printf("  ");
//                 }else{
//                     printf("* ");
//                 }
//             }else{
//             printf("* ");
//             }

//         }
//         printf("\n");
//     }
// }


// ************* TRIANGLE*********
// #include<stdio.h>
// void main(){
//     for(int i=5;i>0;i--){
//         for(int j=i;j>0;j--){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// ********** RIGHT ANGLED TRIANGLE********
// #include<stdio.h>
// void main(){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


// **********INVERTED RIGHT ANGLED TRIANGLE********
// #include<stdio.h>
// void main(){
//     for(int i=0;i<5;i++){
        
//         for(int j=0;j<5;j++){
//             if(j<i){
//                 printf("  ");
//             }else{
//              printf("* ");
//             }

//         }
//         printf("\n");
//     }
// }

// *******INVERTED TRIANGLE******
// #include<stdio.h>
// void main(){
//     for(int i=0;i<5;i++){
        
//         for(int j=0;j<5;j++){
//             if(j<i){
//                 printf(" ");
//             }else{
//              printf("* ");
//             }

//         }
//         printf("\n");
//     }
// }


// *********EQUILATREAL TRIANGLE***********
// #include<stdio.h>
// void main(){
//     for(int i=0;i<4;i++){
//         for(int j=0;j<=4;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

#include<stdio.h>
void main(){
    for(int i=5;i>0;i--){
        for(int k=5;k;k--){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}