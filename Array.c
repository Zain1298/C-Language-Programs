
#include <stdio.h>

int main() {
	float temper[7];
	float sum;
	int day;
	
	for (day=0;day<7;day++)
	{
		printf("Enter temperature for day %d:",day);
		scanf("%f",&temper[day]);
	}
	
	sum=0;
	for(day=0;day<7;day++)
	sum+=temper[day];
	printf("Average is %.1f",sum/7.0);
}

