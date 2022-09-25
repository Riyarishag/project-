/*input the character and check whether it is digit or not*/
#include<stdio.h>
int main()
{
       /* int count;*/
	char cha;
	printf("enter any character");
	cha=getchar();
       /*count=printf("%",cha);
	if(count > 1)
	{
		printf("enter single character only");
	}
	else*/
       	if (cha>='0' && cha<='9')
        {
                printf("\nThe given character %c is a digit",cha);
        }
        else
        {
                printf(" \nThe given character %c is not a digit",cha);
        }
}

