#include<stdio.h>
void main()
{
	int tablenum,mul=1;
	printf("\n enter which table havae to display");
	scanf("%d",&tablenum);
	do
	{
		
		printf("\t %d X %d = %d\n",tablenum,mul,tablenum * mul);
		mul++;
	} while(mul<=10);
}

