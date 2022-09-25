/* To check whether a number is divisible by  5 and 11 or not*/
#include<stdio.h>
int main( )
{
        int num,rem1,rem2;
	printf("enter any number");
	scanf("%d",&num);
	rem1=num % 5;
	rem2=num % 11;
	if ((rem1==0)&&(rem2==0))
	{
		printf("number %d is divisible by both 5 and 11");
	}
	else
	{
		printf("number is not divisible by both 5 and 11");
	}
	
}


