#include<stdio.h>
void main()
{
	int num1,num2,num3,num4,max;
	printf("enter any 4 numbers: ");
	scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
	if((num1>num2)&&(num1>num3)&&(num1>num4))
	{
		max=num1;
	}
	else if((num2>num3)&&(num2>num4))
	{
		max=num2;
	}
	else if(num3>num4)
	{
		max=num3;
	}
	else
	{
		max=num4;
	}
	printf("The Biggest of numbers %d,%d,%d,%d is:  %d",num1,num2,num3,num4,max);
}

