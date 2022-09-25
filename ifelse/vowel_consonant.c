/*input the alphabet and check vowel or consonant*/
#include<stdio.h>
main()
{
	char ch;
	printf("enter any character");
	scanf("%c",&ch);
	if (ch == 'a' || ch =='e' || ch =='i' || ch =='o' || ch =='u' || ch=='A' || ch=='E' ||ch=='I' || ch=='O' || ch=='U')
{
	printf("The given character is a vowel");
}
	else
{
	printf("The given character is  a consonant");
}
}
