#include<stdio.h>

int main()
{
    float val1,val2,output;

    printf("enter a floating value - ");
    scanf("%f",&val1);

    printf("enter another floating avlaue - ");
    scanf("%f",&val2);

    output = val1 * val2;

    printf("%.2f",output);

    return 0;
}