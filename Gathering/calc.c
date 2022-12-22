//Write a c program to create calc using Nested Function.

#include<stdio.h>
void add();
void sub();
void multi();
void divide();
main()
{
	add();
}
void add()
{
	printf("\n******ADDITION*******\n");
	int a,b;
	printf("A:");
	scanf("%d",&a);
	printf("B:");
	scanf("%d",&b);
	printf("addition is:%d",a+b);
	
	sub();
}
void sub()
{
	printf("\n******substraction*******\n");
	int a,b;
	printf("A:");
	scanf("%d",&a);
	printf("B:");
	scanf("%d",&b);
	printf("\nsubstraction:%d",a-b);
	multi();
}
void multi()
{
	printf("\n******multiplication*******\n");
	int a,b;
	printf("A:");
	scanf("%d",&a);
	printf("B:");
	scanf("%d",&b);
	printf("\nmultiplication:%d",a*b);
	divide();
}
void divide()
{
	printf("\n******division*******\n");
	float a,b;
	printf("A:");
	scanf("%d",&a);
	printf("B:");
	scanf("%d",&b);
	printf("\ndivision:%f",a/b);
}