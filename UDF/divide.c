//divisible by 3 & 5 both or not using UDF

#include<stdio.h>
void divide(int a);
main()
{
	int n;
	printf("enter the number:=");
	scanf("%d",&n);
	divide(n);
}
void divide(int a)
{	
	if(a%3==0 && a%5==0)
	{
		printf("%d number divisible by 3&5.",a);
	}
	else if(a%3==0 && a%5!=0)
	{
		printf("%d number is divisible by 3 but not divisible by 5.",a);
	}
	else if(a%5==0 && a%3!=0)
	{
		printf("%d number is divisible by 5 but not divisible by 3.",a);
	}
	else
	{
		printf("%d number not divisible by 3&5.",a);
	}
}