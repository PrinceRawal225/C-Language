#include<stdio.h>
main()
{
	int a[100][100];
	int i,j,r,c,sum=0,average;
	
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
	
	printf("\n*******average********\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=sum+a[i][j];
			
			average=sum/(r*c);
		}
	}
	
	printf("2D array average array:=%d",average);
}