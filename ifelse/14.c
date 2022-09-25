/* input angles of triangle and check given triangle valid or not*/
#include<stdio.h>
int main()
{
	float angle1,angle2,angle3,tot;
	printf("enter 3 angles of a triangle in degrees");
	scanf("%f%f%f",&angle1,&angle2,&angle3);
	if ((angle1+angle2+angle3)==180)
	{
		printf("the given triangle is valid");
	}
	else
	{ 
		printf("the given triangle is invalid");
	}
}

