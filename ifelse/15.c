/* program to input sides of a triangle and check valid or not*/
#include<stdio.h>
int main()
{
	float side1,side2,side3;
	printf("enter 3 sides of a triangle in cm");
	scanf("%f%f%f",&side1,&side2,&side3);
	if ((side1+side2 > side3)&& (side2+side3 > side1)&& (side1+side3 > side2))
	{
		printf("the given triangle is valid one");
	}
	else 
	{
		printf("the given triangle is invalid");
	}
}

