#include<stdio.h>
main()
{
	int max=0,a[100],n,i;
	
	printf("enter the size of array:=");
	scanf("%d",&n);
	
	printf("\nenter the array value\n");
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		
		if(max<=a[i])
		{
			max=a[i];
		}
	}
	
	printf("\nmaximum array :=%d",max);
	
	
}