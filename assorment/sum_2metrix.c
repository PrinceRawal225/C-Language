//addition of 2D in 2metrix

#include<stdio.h>
main()
{
	int a[100][100],i,j,r,c,b[100][100],C[100][100];
	
	printf("Enter the row value:=");
	scanf("%d",&r);
	
	printf("Enter the column value:=");
	scanf("%d",&c);
	
	printf("\n***********enter the first array**********\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n***********enter the second array**********\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n***********addition of two metrix**********\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			C[i][j]=a[i][j]+b[i][j];
			printf("c[%d][%d]=%d\n\n",i,j,C[i][j]);
		}
	}
}
