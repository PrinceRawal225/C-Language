//whether two matrices are equal or not

#include<stdio.h>
main()
{
	int a[100][100],i,j,r,c,b[100][100],count=0;
	
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
	
	printf("\n***********whether check 2 metrix equal or not**********\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]==b[i][j])
			{
				count++;	
			}
			
		}
	}
	
			if(count==(r*c))
			{
				printf("first and second metrix are equal..!!");
			}
			else
			{
				printf("first and second metrix are not equal..!!");
			}
}
