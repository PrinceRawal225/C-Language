#include<stdio.h>
#include<string.h>
main()
{
	char a[100],ch;
	int i,n;
	
	printf("enter your massage:=");
	gets(a);
	
	printf("\n*******press '1' for upper case*******\n ");
	printf("\n*******press '2' for lower case*******\n ");
	
	printf("enter your choice:=");
	scanf("%c",&ch);
	
	n=strlen(a);
	
	switch(ch)
	{
		case '1':
		for(i=0;i<n;i++)
		{
			if(a[i]>='a' && a[i]<='z')
			{
				a[i]=a[i]-32;
				printf("%c",a[i]);
			}
			else
			{
				printf("%c",a[i]);
			}
		}
		break;
		
		case '2':
		for(i=0;i<n;i++)
		{
			if(a[i]>='A' && a[i]<='Z')
			{
				a[i]=a[i]+32;
				printf("%c",a[i]);
			}
			else
			{
				printf("%c",a[i]);
			}
		}
		break;
	}
	
	
	
}