#include<stdio.h>
void main()
{
	int n,num=1;
	printf("\nenter how many natural numbers to be displayed");
	scanf("%d",&n);
/*	do
	{
		printf("\t %d",num);
		num++;
	}while(num<=n);*/

/*	while(num<=n)
	{
		printf("\t %d",num);
		num++;
	}*/


       /*to display natural numbers in descending order*/
       	num=n;
	while(num>=1)
	{
		printf("\t %d",num);
		num--;
	}
}

