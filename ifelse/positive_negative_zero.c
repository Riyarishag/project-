/*To check whether number is positive or negative or zero*/
#include<stdio.h>
void main  ()
{
        float num1;
        printf("enter any  number");
        scanf("%f",&num1);
	if (num1==0.00000)
	{
		printf("the given number is zero");
	}
	else if(num1>0)
	{
		printf("the given number is positive");
	}
	else 
	{
		printf("the given number is negative");
	}	
		
}

