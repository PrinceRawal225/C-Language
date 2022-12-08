#include<stdio.h>
main()
{
	int no,a[1000],i,ps;
	
	printf("enter the array size:=");
	scanf("%d",&no);
	
	printf("\nenter the value of array:=\n");
	for(i=0;i<no;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nenter the position:=");
	scanf("%d",&ps);
	
	for(i=ps;i<no-1;i++)
	{
		a[i]=a[i+1];
	}
	
	printf("\n*******delete array value in array*******\n");
	
	for(i=0;i<no-1;i++)
	{
		printf("%d\n",a[i]);
	}
	
	
}