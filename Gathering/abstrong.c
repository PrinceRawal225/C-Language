// Find No Is Amstrong or not using parameter with return
#include<stdio.h>
int amstrong(int a);
main()
{
	int a,b,c;
	printf("Enter the value of A:");
	scanf("%d",&a);
	
	b=a;
	c= abstrong(a);
	if(b==c)
	{
		printf("\n%d number is abstrong number.",b);	
	}
	else
	{
		printf("\n%d number is not abstrong number.",b);
	}
}
int abstrong(int a)
{
	int l,sum=0,count=0;

	while(a!=0)
	{
		l=a%10;
		sum=sum+(l*l*l);
		a=a/10;
	}
	
	return sum;
}