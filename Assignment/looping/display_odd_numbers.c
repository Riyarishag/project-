// To display odd numbers from 1 to n, using dowhile,while; display from n to 1//
#include<stdio.h>
void main()
{
        int n,num=1;
        printf("\nenter maximum value upto which extent odd numbers to be displayed");
	
        scanf("%d",&n);
        do
        {
                printf("\t %d",num);
                num=num + 2;
        
        }while(num<=n);


        /*using while
	while(num<=n)
        {
                printf("\t %d",num);
                num=num+2;
        }*/





        /*to display even numbers in descending order
        int n,num;
        printf("\nenter maximum value upto which extent odd numbers to be displayed");
        scanf("%d",&n);

        (n % 2 !=0)? (num=n):(num=n-1);

        while(num>=1)
        {

                printf("\t %d",num);
                num=num-2;
        }*/
}
 


