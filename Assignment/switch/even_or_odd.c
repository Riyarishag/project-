#include<stdio.h>
#include<stdlib.h>
void main()
{
	int num;
	printf("\nenter any number: ");
	scanf("%d",&num);
	if(num==0)
	{
		printf("\n 0 is not even or odd number");
		exit(0);
	}

	switch(num % 2)
	{
		case 0:
			printf("\n The given number %d is even number",num);
			break;
		case 1: 
			printf("\n The given number %d is odd number",num);
			break;

	}
}
