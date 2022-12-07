//1D array print

#include<stdio.h>
main()
{
	int a[1000],no,i;
	
	printf("enter the size of array:=\n");
	scanf("%d",&no);
	
	for(i=0;i<no;i++)
	{
		printf("enter the value of array:=");
		scanf("%d",&a[i]);
	}
	
	printf("\n**********printf of array value***********\n");
	
	for(i=0;i<no;i++)
	{
		printf("array :=%d\n",a[i]);
	}
}