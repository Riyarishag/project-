/*check given character is an alphabet or not*/
#include<stdio.h>
int main()
{
	char cha;
	printf("enter any character");
	scanf("%c",&cha);
	if ((cha>='a' && cha<='z') || (cha>='A'&& cha<='Z'))
	{
		printf("The given character %c is an alphabet",cha);
	}
	else
	{
		printf("The given character %c is not an alphabaet",cha);
	}
}
