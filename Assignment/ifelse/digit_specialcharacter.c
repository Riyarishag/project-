/*input the character and check alphabet or number or special character*/
#include<stdio.h>
int main()
{
	char cha;
	printf("enter any character");
	scanf("%c",&cha);
	if ((cha>='a' && cha<='z') || (cha>='A'&& cha<='Z'))
	{
		printf(" The given character %c is an alphabet",cha);
	}
	else if (cha>='0' && cha<='9') 
	{
		printf("The given character %c is a number",cha);
	}
	else 
	{
		printf(" The given character %c is a special character",cha);
	}
}




