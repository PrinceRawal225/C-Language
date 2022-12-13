//reverse number in array 1D

#include<stdio.h>
main()
{
	int a[100],i,n;
	
	printf("Enter the size of array:=");
	scanf("%d",&n);
	
	printf("\n*******enter the array value*******\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	
	printf("\n****print reverse number in array*****\n");
	
	for(i=n-1;i>=0;i--)
	{
			printf("%d\n",a[i]);
	}
}