#include<stdio.h>
main()
{
	int a[100][100];
	int i,j,n,sum;
	
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
	
	printf("\n*******anti metrix********\n");
	
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+j==n-1)
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


/*	0 1 2 3 4
0	1 2 3 4 5
1	4 5 6 4 5
2	7 8 9 4 5
3   1 2 3 4 5
4   1 2 3 4 5


*/