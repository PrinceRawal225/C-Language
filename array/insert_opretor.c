#include<stdio.h>
main()
{
	int nv,ps,n,a[1000],i;
	
	
	printf("enter the array size:=");
	scanf("%d",&n);
	
	printf("\nenter the array value\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	
		printf("enter the new value position:=");
		scanf("%d",&ps);
		
		printf("enter the new value of array:=");
		scanf("%d",&nv);
		
		
	for(i=n-1;i>=ps;i--)
	{
		a[i+1]=a[i];
	}
	
	a[ps]=nv;
	
	printf("\n******insert new value in array*******\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	
}