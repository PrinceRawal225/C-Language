//find circle area using no return with parameter function.

#include<stdio.h>
void area(int r);
main()
{
	int r;
	printf("enter the redius:");
	scanf("%d",&r);
	
	area(r);
}
void area(int r)
{
	float area;
	
	area=3.14*r*r;
	
	printf("area of circle:%f",area);
}