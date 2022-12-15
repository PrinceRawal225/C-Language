// remove all repeated characters in a string.

#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i,j,n=0;
	
	printf("enter your massage:=");
	gets(a);
	
	n=strlen(a);
	
	printf("input lenth:=%d\n",n);
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[j]='\0';
			}
		}
		
		if(a[i]!='\0' && a[i]!=' ')
		{
			printf("%c",a[i]);
		}
	}
	
	
}