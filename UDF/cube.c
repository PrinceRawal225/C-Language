//find cube of given no using UDF
#include<stdio.h>
int cube(int b);
main()
{
	int n,a;
	
	printf("enter the number:=");
	scanf("%d",&n);
	
	a=cube(n);
	printf("%d cube is:=%d",n,a);
}
	int cube(int b)
	{	
		int c;
		c=b*b*b;
		return c;
	}