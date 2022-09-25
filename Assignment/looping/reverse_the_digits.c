// To display  digits in a given number in reverse order//
#include<stdio.h>
void main()
{
        int q,r,num,count=0,last,sum=0;
        printf("enter any number: ");
        scanf("%d",&num);
        last=num % 10;
       // printf("\n The last digit in ta given number is %d",num % 10);

        do
        {
          q=num/10;
          r=num % 10;
	  printf("%d",r);
          num=q;
        } while(num!=0);

        //sum =sum+r;
        //printf("\n The first  digit in a given number is %d",r);

        //printf("\n The sum of first and last digits are %d",sum);

}

