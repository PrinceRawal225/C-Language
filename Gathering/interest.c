//Write a c program to find rate of interest using simple function

#include<stdio.h>
void interest(int a,int b,int c);
main()
{
	int amount,rate,days;
	
	interest(amount,rate,days);	
}

void interest(int a,int b,int c)
{
	int interest,amount,rate,day;
	
	printf("amount:");
	scanf("%d",&amount);
	printf("rate:");
	scanf("%d",&rate);
	printf("days:");
	scanf("%d",&day);
	
	interest=amount*rate*day/100;

	printf("interest:%d",interest);
}