#include<stdio.h>
struct {
    char *name;
}car1,car2;

void main(){
    car1.name="Mercedes";
    car2.name="maruti suzuki";
    printf("%s\n",car1.name);
    printf("%s\n",car2.name);
}