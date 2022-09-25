#include<stdio.h>
void main()
{
   char operator;
   int num1,num2;
   printf("\nEnter  operator like\n+ for addition\n- for subtraction\n * for Multiplication\n/ for division\n'R' for remainder : ");
   operator=getchar();
   switch(operator)
        {
        case '+':
		 printf("\n Enter any two numbers");
		 scanf("%d%d",&num1,&num2);
                 printf("\n sum of given two numbers %d and %d is %d",num1,num2,num1+num2);
                 break;

        case '-':
		 printf("\n Enter any two numbers");
		 scanf("%d%d",&num1,&num2);
                 printf("\n Difference between  given two numbers %d and %d is %d",num1,num2,num1 - num2);
                 break;

        case '*':
                printf("\n Enter any two numbers");
	        scanf("%d%d",&num1,&num2);
	        printf("\n Product of the given two numbers %d and  %d  is %d",num1,num2,num1 * num2);
                break;

        case '/':
                printf("\n Enter any two numbers");
		scanf("%d%d",&num1,&num2);
	       	printf("\n Quotient by performing division  of given two numbers %d and %d is %d",num1,num2,num1 / num2);
                break;

        case 'R':
                printf("\n Enter any two numbers");
		scanf("%d%d",&num1,&num2);
	       	printf("\n Remainder by performing division between two numbers %d and %d  is %d",num1,num2,num1 % num2);
                break;
	default :
		printf("\n Enter valid symbol ( + or - or * or / or R) only");
		break;
               
	}

}

