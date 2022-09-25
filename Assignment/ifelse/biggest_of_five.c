#include<stdio.h>
void main()
{
        int num1,num2,num3,num4,num5,max;
        printf("Enter any 5 numbers: ");
        scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
        if((num1>=num2)&&(num1>=num3)&&(num1>=num4)&&(num1>=num5))
        {
                max=num1;
        }
        else if((num2>=num3)&&(num2>=num4)&&(num2>=num5))
        {
                max=num2;
        }
        else if((num3>=num4)&&(num3>=num5))
        {
                max=num3;
        }
        else if(num4>=num5)
        {
                max=num4;
        }
	else
	{
		max=num5;
	}
        printf("The Biggest of numbers %d,%d,%d,%d,%d is:  %d",num1,num2,num3,num4,num5,max);
}

