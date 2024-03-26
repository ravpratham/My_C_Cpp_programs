// Q) - Trek is 3700km long. rate = 6km/day. calculate the time a person would take to complete the trip in format (Y/M/D)

#include<stdio.h>
	int main()
	{

    	int totalDays = 3700/6;
    	printf("total days - %d\n",totalDays);
    
    	int year,month,day;
    	int remaining_days_years;

    	year = totalDays/365; 
    	printf("years - %d\n",year);

    	remaining_days_years = totalDays%365;
    	printf("remaining time period after calculating no. of years is 'remaining_days_years' - %d\n",remaining_days_years);

    	month = remaining_days_years/(365/12);
    	printf("months - %d\n",month);

    	day = (remaining_days_years - (30 * month));
    	printf("days - %d\n",day);
    
    	printf("Travel days - %d/%d/%d",year,month,day);
    
    	return 0;
	
	}