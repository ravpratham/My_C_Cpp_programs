#include <stdio.h>
#include <math.h>
int main()
{
    float b,ls,rs1,rs2;
    scanf("%f %f",&b,&ls);
    rs1 = sqrt(pow(ls,2) - pow(b,2));
    rs2 = sqrt(pow(ls,2) + pow(b,2));
    printf("%.5f %.5f",rs1,rs2);
	return 0;
}