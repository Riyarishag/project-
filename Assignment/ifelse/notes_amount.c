#include<stdio.h>
void main()
{
	int amount,rem,note2000,note500,note100,note50,note20,note10,note5,note2,note1;
	printf("\n Enter the  amount");
	scanf("%d",&amount);
	note2000=amount/2000;
	rem=(amount % 2000);
	note500=rem/500;
	rem=rem % 500;
	note100=rem /100;
	rem=rem % 100;
	note50=rem /50;
	rem=rem % 50;
	note20=rem /20;
	rem=rem % 20;
	note10=rem /10;
	rem=rem % 10;
	note5=rem/5;
	rem=rem % 5;
	note2=rem/2;
        note1=rem % 2;
			
	printf("\nThousand notes are: %d \nFive hundred notes are : %d\nHundred notes are : %d \nFifty notes are: %d\nTwenty notes are: %d \nTen notes are: %d\nFive notes are: %d\nTwo rupees notes are: %d\nOne rupee notes are: %d",note2000,note500,note100,note50,note20,note10,note5,note2,note1);

}
