// **************HARRYS METHOD OF CREATING STACK USING ARRAY WITH STRUCTURES*************
// #include<stdio.h>
// #include<stdlib.h>
// struct stack{
//     int top;
//     int *arr;
//     int size;
// };

// int isEmpty(struct stack *ptr){
//     if(ptr->top==-1){
//         return 1;
//     }return 0;
// }

// int isFull(struct stack *ptr){
//     if(ptr->top==ptr->size-1){
//         return 1;
//     }return 0;
// }

// void pushele(struct stack *ptr,int val){
//     if(isFull(ptr)){
//         printf("Overflow\n");
//     }else{
//         ptr->top++;
//         ptr->arr[ptr->top]=val;
//         return;
//     }
// }

// void display(struct stack *ptr){
//     if(isEmpty(ptr)){
//         printf("Underflow\n");
//     }else{
//         for(int i=1;i<=ptr->top+1;i++){
//             printf("Element at position %d is %d\n",i,ptr->arr[ptr->top-i+1]);
//         }
//     }
// }

// void main(){
//     int value;
//     struct stack *s=(struct stack*)malloc(sizeof(struct stack));
//     s->top=-1;
//     printf("Enter the number of elements you want to enter\n");
//     scanf("%d",&s->size);
//     s->arr=(int *)malloc(s->size*sizeof(int));
//     for(int i=0;i<s->size;i++){
//         printf("Enter element %d :",i+1);
//         scanf("%d",&value);
//         pushele(s,value);
//     }
//     display(s);
// }

// ******************************COLLEGE TAUGHT METHODE***********
// #include<stdio.h>
// #include<stdlib.h>
// int top=-1;
// void pushStack(int *stack,int n){
//     int num;
//     if(top==n-1){
//         printf("Overflow\n");
//         return;
//     }else{
//         printf("Enter element : ");
//         scanf("%d",&num);
//         top++;
//         stack[top]=num;
//         return;
//     }
// }

// void display(int *stack,int n){
//     if(top==-1){
//         printf("Underflow\n");
//         return;
//     }else{
//         for( int j=0;j<top+1;j++){
//             printf("%d ",stack[j]);
//         }
//     }
// }

// void main(){

//     int size,*arr;
//     printf("Enter the size of stack you want\n");
//     scanf("%d",&size);
//     arr=(int *)malloc(size*sizeof(int));
//     for(int i=0;i<size;i++){
//         pushStack(arr,size);
//     }
//     display(arr,size);
// }