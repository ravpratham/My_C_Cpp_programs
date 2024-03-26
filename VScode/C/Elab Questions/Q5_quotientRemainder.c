#include <stdio.h>
int main()
{
    int billamt,amtgiven;
    scanf("%d\n%d",&billamt,&amtgiven);
    printf("Quotient:%d\n",billamt/amtgiven);
    printf("Remainder:%d",billamt%amtgiven);
	return 0;
}