/* program to input month number and print number of days in a given month*/
#include<stdio.h>
int main()
{
	int mon;
	printf("enter a month number between 1 and 12");
	scanf("%d",&mon);
	if (mon==1 || mon==3 || mon==5 || mon==7 || mon==8 ||mon==10 || mon==12)
	{
		printf(" the number of days in a given month are 31");
	}
	else if (mon==4 || mon==6 || mon==9 || mon==11)
	{
		printf("the number of days in a given month are 30");
	}
	else 
	{ 
		printf("the number of days in a given month are 28");
	}
}
