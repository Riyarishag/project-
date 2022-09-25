// to count and display number of digits and sum of digits in a given number//
#include<stdio.h>
void main()
{
        int q,r,num,count=0,sum=0;
        printf("enter any number: ");
        scanf("%d",&num);
	do
        {
       	  	q=num/10;
		r=num%10;
	  	count++;
	  	printf("\n The digit %d  is %d",count,r);
	  	num=q;
	  	sum=sum+r;
        } while(num!=0);

	printf("\n The number of digits in a given number are %d",count);
	printf("\n The sum of digits in a given number is %d",sum);
}

