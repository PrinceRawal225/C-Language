//2 array addition and store it into another array

#include<stdio.h>
main()
{
	int a[100],b[100],no,i,c[100];
	
	printf("enter the size of array:=");
	scanf("%d",&no);
	
	for(i=0;i<no;i++)
	{
		printf("enter the value of a[i]:=");
		scanf("%d",&a[i]);
	}
	
	printf("\n************\n");
	
	for(i=0;i<no;i++)
	{
		printf("enter the value of b[i]:=");
		scanf("%d",&b[i]);
	}
	
	printf("\n**********addition of array***********\n");
	
	printf("third array value\n");
	
	for(i=0;i<no;i++)
	{
		c[i]=a[i]+b[i];
		
		printf("%d\n",c[i]);
	}
}