#include <stdio.h>
int main()
{
    int angle1,angle2,angle3,sumofangles;
    
    scanf("%d %d %d",&angle1,&angle2,&angle3);
    sumofangles = angle1 + angle2 + angle3;
    if (sumofangles != 180){
        printf("Angles are not valid");
    }
    
    else{
        printf("Angles are valid");
    }
	return 0;
}