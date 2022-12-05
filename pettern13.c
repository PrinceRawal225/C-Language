#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=65;i<=69;i++)
	{
		for(k=i;k<=69;k++)
		{
			printf(" ");
		}
		for(j=i;j>=65;j--)
		{
			printf("%c",j);
		}
		printf("\n");
	}
}