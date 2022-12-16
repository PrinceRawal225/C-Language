#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i,n,no=0,ch=0,sy=0;
	
	printf("enter your massage:=");
	gets(a);
	
	n=strlen(a);
	
	for(i=0;i<n;i++)
	{
		if(a[i]>='A' && a[i]<='z')
		{
			ch++;			
		}
		else if(a[i]>='0' && a[i]<='9')
		{
			no++;
		}
		else
		{
			sy++;
		}
	}
	
	printf("symbol in string:=%d\n",sy);
	printf("number in string:=%d\n",no);
	printf("alphabet in string:=%d",ch);
}