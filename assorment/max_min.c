//max and min number in 1D array

#include<stdio.h>
main()
{
	int a[100],i,n,max=0,min;
	
	printf("Enter the size of array:=");
	scanf("%d",&n);
	
	printf("\n*******enter the array value*******\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	
	min=a[0];
	
	for(i=0;i<n;i++)
	{
		if(max<=a[i])
		{
			max=a[i];
		}
		
		if(min>=a[i])
		{
			min=a[i];
		}
	}
	
	printf("\nmaximum number in array:=%d",max);
	
	printf("\nminimum number in array:=%d",min);
}