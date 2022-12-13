//whether two matrices are equal or not

#include<stdio.h>
main()
{
	int a[100][100],i,j,r,c,sum=0;
	
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
	
	
	
	printf("\n***********sum of diagonal metrix**********\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
			printf("%d ",a[i][j]);
			sum=sum+a[i][j];
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	printf("sum is:=%d",sum);
}
