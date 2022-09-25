#include<stdio.h>
void main()
{
	int side1,side2,side3;
	printf("Enter 3 sides of a Triangle: ");
	scanf("%d%d%d",&side1,&side2,&side3);
	if((side1==0)||(side2==0)||(side3==0))
	{
		printf("\nThe given triangle with sides %d,%d,%d is not a valid",side1,side2,side3); 
	}
	else if((side1==side2)&&(side1==side3))
	{
		printf("\nThe given triangle with sides %d,%d,%d is an equilateral triangle",side1,side2,side3);
	}
	else if ((side1 == side2) || (side1 == side3))
	{
		printf("\nThe given triangle with sides %d,%d,%d is Isoceles",side1,side2,side3);
	}
	else
	{
		printf(" \nThe given triangle with sides %d,%d,%d is scalene",side1,side2,side3);
	}	
}


