/* to count total number of  notes in a given amount*/
#include<stdio.h>
int main()
{
	int note500,note100,note50,note10,note5,note2,note1,amount;
	printf("enter the amoutin rupees");
	scanf("%d",&amount);
	note500=amount/500;
	amount-=note500*500;
	note100=amount/100;
	amount-=note100*100;
	note50=amount/50;
	amount-=note50*50;
	note10=amount/10;
	amount-=note10*10;
	note5=amount/5;
	amount-=note5*5;
	note2=amount/2;
	amount-=note2*2;
	note1=amount;

	printf("500 notes = %d\n",note500);
	printf(" 100 notes = %d\n",note100);
	printf(" 50 notes = %d\n",note50);
	printf(" 10 notes = %d\n",note10);
	printf(" 5 notes = %d\n",note5);
	printf(" 2 notes = %d\n",note2);
	printf(" 1 notes = %d\n",note1);
}

