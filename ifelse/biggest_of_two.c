/*To find biggest of two numbers*/
#include<stdio.h>
void main()
{
	float num1,num2;
	printf("enter any 2 numbers");
	scanf("%f%f",&num1,&num2);
	if(num1>num2)
	{
	printf("The biggest of %f and %f is %f",num1,num2,num1);
	}
	else
	{
	printf("The biggest of %f and %f is %f",num1,num2,num2);
	}
}

