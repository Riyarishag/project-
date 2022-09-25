#include<stdio.h>
void main()
{
	int n,sum=0,a=2;
	printf("enter n value up to which sum of even numbers to be calculated: ");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("\nenter valid range ");
	}
	else

	{
	/*do
	{
		sum=sum+a;
		a+=2;
	} while(a<=n);*/
	while(a<=n)
	{
		sum=sum+a;
		a+=2;
	}

	printf("sum of even numbers upto %d is %d",n,sum);
	}
}

	
