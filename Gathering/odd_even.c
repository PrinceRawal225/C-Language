//find even and odd using return with parameter function

#include<stdio.h>
int odd_even(int a);
main()
{
	int a,b;
	printf("enter the value of a:");
	scanf("%d",&a);
	b = odd_even(a);
	if(b==0)
	{
		printf("%d number is even number..!!",a);
	}
	else
	{
		printf("%d number is odd number..!!",a);
	}
}
int odd_even(int a)
{
	int c;
	c=a%2;
	return c;
}