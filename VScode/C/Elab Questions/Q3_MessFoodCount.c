#include <stdio.h>
int main()
{
    int alvqntoffood,messcnt,dividedqnt,remfood;
    scanf("%d",&alvqntoffood);
    scanf("%d",&messcnt);
    dividedqnt = alvqntoffood/messcnt;
    remfood = alvqntoffood%messcnt;
    printf("%d %d",dividedqnt,remfood);
	return 0;
}