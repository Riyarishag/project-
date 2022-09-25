// To find the product of all digits in  a given number//
#include<stdio.h>
void main()
{
        int q,r,num,prod=1;
        printf("enter any number: ");
        scanf("%d",&num);

	while(num!=0)
	{
		q=num/10;
		r=num%10;
		prod=prod*r;
		num=q;
	}

        
        /*do
        {
          q=num/10;
          r=num % 10;
	  prod=prod*r;
          num=q;
        } while(num!=0);*/

        printf("\n The product of  digits in a given number is  %d",prod);

}

