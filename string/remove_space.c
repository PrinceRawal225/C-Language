//remove space in string.

#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i,n=0;
	
	printf("Enter the massage:=");
	gets(a);
	
	n=strlen(a);
	
	printf("string lenth::=%d\n",n);
	
	for(i=0;i<n;i++)
	{
			if(a[i]!=' ')
			{
				printf("%c",a[i]);
			}
		
	}
	
	
	
	
}