#include<stdio.h>
main()
{
	int a[100][100];
	int i,j,r,c,sum;
	
	printf("enter the row of metrix:=");
	scanf("%d",&r);
	
	printf("enter the column of metrix:=");
	scanf("%d",&c);
	
	printf("\n_____enter the 2D array value_____\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n*******print diagonal metrix********\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
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
	
	
	printf("\nsum of diagonal metrix:=%d",sum);
}