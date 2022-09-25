#include<stdio.h>
void main()
{
	int wday;
	printf("\nenter week number");
	scanf("%d",&wday);

	switch(wday)
	{	
	case 1:
		printf("\n The week day is SUNDAY");
		break;

	case 2:
		printf("\n The week day is MONDAY");
		break;

	case 3:
		printf("\n The week day is TUESDAY");
		break;

	case 4:
		printf("\n The week day is WEDNESDAY");
		break;

	case 5:
		printf("\n The week day is THURSDAY");
		break;
	case 6:
		printf("\n The week day is FRIDAY");
		break;
	case 7:
		printf("\n The week day is SATURDAY");
		break;
	default: 
		printf("\n Enter a valid number from 1 to 7 only");
		break;
	}
}
