#include<stdio.h>
void main()
{
      int num1,num2,num3,max;
      printf("enter 3 numbers to be compared");
      scanf("%d%d%d",&num1,&num2,&num3);
      if(num1>num2)
          {
              if(num1>num3)
                      max=num1;
              else
                        max=num3;

          }
      else
          {
                  if(num2>num3)
                    max=num2;
                else max=num3;
          }
printf("maximum of %d,%d and %d is %d",num1,num2,num3,max);
}


