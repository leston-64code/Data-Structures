#include <stdio.h>
#include <stdlib.h>
void main()
{
    float a, b, res;
    char ch;
    printf("Enter the operation you want\t");
    scanf("%f%c%f", &a, &ch, &b);
    switch (ch)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a + b;
        break;
    case '*':
        res = a + b;
        break;
    case '/':
        res = a + b;
        if (b == 0)
        {
            printf("Cannot be divided by zero");
            exit(0);
        }
        else
        {
            res = a / b;
        }

    default:
        printf("Invalid opertaion try a valid operation");
        break;
    }

    printf("Result of %f%c%f=%f", a, ch, b, res);
}