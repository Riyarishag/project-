// To display even numbers from 2 to n, using dowhile,while; display from n to 2//
#include<stdio.h>
void main()
{
        /*int n,num=2;
        printf("\nenter maximum value upto which extent even numbers to be displayed");
        scanf("%d",&n);*/
        /*do
        {
                printf("\t %d",num);
                num=num + 2;
        
        }while(num<=n);*/

       /* while(num<=n)
        {
                printf("\t %d",num);
                num=num+2;
        }*/

        /*to display even numbers in descending order*/
        int n,num;
        printf("\nenter maximum value upto which extent even numbers to be displayed");
        scanf("%d",&n);

        (n % 2 ==0)? (num=n):(num=n-1);

        while(num>=2)
        {
                         
                printf("\t %d",num);
                num=num-2;
        }
}

