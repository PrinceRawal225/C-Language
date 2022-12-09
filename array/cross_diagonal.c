#include<stdio.h>
main()
{
	int a[100][100];
	int i,j,n,sum=0,sumc=0;
	
	printf("enter the number of metrix:=");
	scanf("%d",&n);
	
	
	printf("\n_____enter the 2D array value_____\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n*******printf cross diagonal metrix********\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j && i+j==n-1)
			{
				sumc=sumc+a[i][j];
				printf("%d",a[i][j]);
			}
			else if(i==j || i+j==n-1)
			{
				sum=sum+a[i][j];
				printf("%d ",a[i][j]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
	printf("\nsum of cross diagonal metrix:=%d",sum-sumc);
}