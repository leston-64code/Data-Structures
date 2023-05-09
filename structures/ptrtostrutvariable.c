#include<stdio.h>
struct abc{
    int x;
    int y;
};
void main(){
    struct abc a={10,20};
    struct abc *ptr=&a;
    printf("%d %d ",ptr->x,ptr->y);
}