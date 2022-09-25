
// To swap the first and last digits in  a given number//
#include<stdio.h>
#include<math.h>
void main()
{
        int q,r,num,check,count,n=1,rnum=0;
        printf("enter any number: ");
        scanf("%d",&num);
        count=printf("%d",num);
       // check=num;

	do
        {
                //q=num/10;
                r=num % 10;
                num=num/10;
                //num=q;
                rnum=(rnum*10)+r;
                /*rnum=rnum + (r*pow(10,count-n));*/
                //n++;
        } while(num!=0);

        if(check==rnum)
        {
                printf("\nThe given number %d is a Palindrome",check);
        }
        else
        {
                printf("\n The given number %d is not a Palindrome",check);
        }
        printf("\n The given number %d in reverse order is %d",check,rnum);




