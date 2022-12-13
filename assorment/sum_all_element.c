//sum of all element 1D

#include<stdio.h>
main()
{
	int a[100],i,n,sum=0;
	
	printf("Enter the size of array:=");
	scanf("%d",&n);
	
	printf("\n*******enter the array value*******\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	
	printf("\nsum of all element:=%d",sum);
}