#include<stdio.h>
main()
{
	int a[100][100],b[100][100],d[100][100];
	int i,j,r,c;
	
	printf("enter the row of metrix:=");
	scanf("%d",&r);
	
	printf("enter the column of metrix:=");
	scanf("%d",&c);
	
	printf("\n_____enter the 1 array value_____\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n_____enter the 2 array value_____\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
		
	}
	
	printf("\n*******addition of 2D array*******\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=a[i][j]+b[i][j];
			
			printf("%d\n",d[i][j]);
			
		}	
	}
	
}