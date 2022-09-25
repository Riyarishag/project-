// To display sum of n natural  numbers //
#include<stdio.h>
void main()
{
        int n,a=1,sum=0;
        printf("\nenter maximum value of natural numbers to be added ");
        scanf("%d",&n);
        /*do
        {
             sum=sum+a;
	     a++;

        }while(a<=n);
	*/

        while(a<=n)
        {
               
			sum=sum+1;
			a++;
        }
	printf("\n The sum of %d natural numbers is %d",n,sum);

}

