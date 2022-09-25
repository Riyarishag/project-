#include<stdio.h>
void main()
{
	int angle1,angle2,angle3;
	printf("Enter the 3 angles of a triangle: ");
	scanf("%d%d%d",&angle1,&angle2,&angle3);
	if((angle1 + angle2 + angle3)==180)
	{
		printf("The given Triangle is valid");
	}
	else
	{
		printf("The given Triangle is not valid as sum of angles is not equal 180 degrees");

	}
}
