#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i,n;
	
	printf("enter your massage:=");
	gets(a);
	
	n=strlen(a);
	
	for(i=0;i<n;i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i]=a[i]-32;
			printf("%c",a[i]);
		}
		else if(a[i]>='A' && a[i]<='Z')
		{
			a[i]=a[i]+32;
			printf("%c",a[i]);
		}
	}
}