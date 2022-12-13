//negative element in array  1D

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
	
	printf("\n****print negative element in array*****\n");
	
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d\n",a[i]);
		}
	}
}