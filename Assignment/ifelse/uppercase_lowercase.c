/*input the alphabet  and check alphabet is uppercase or lowercaase*/
#include<stdio.h>
int main()
{
	char cha;
	printf("Enter any alphabet: ");
	scanf("%c",&cha);
	if (cha>='a' && cha<='z')  
	{
		printf(" The given alphabet %c is of lowercase",cha);
	}
	else if (cha>='A'&& cha<='Z')
	{
		printf("The given alphabet %c is of uppercase",cha);
	}
	else 
	{
		printf(" The given character %c is not an alphabet",cha);
	}
}





