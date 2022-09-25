/*to find maximum between three numbers*/
  #include<stdio.h>
int main  ()
{
        float num1,num2,num3;

        printf("enter 3 numbers");
        scanf("%f%f%f",&num1,&num2,&num3);
        if ((num1>num2)&&(num1>num3))
        {
                printf("maximum of 3 numbers is %f",num1);
        }
        else
	{
		if((num2>num3)&&(num2>num1))
        {
                printf("maximum of 3 numbers is %f",num2);
        }
		else
		{
			printf("maximum of 3 numbers is %f",num3);
		}
}
}

