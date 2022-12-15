#include<stdio.h>
#include<string.h>
main()
{
	char a[100],b[100];
	int i,j,n,count;
	
	printf("enter your massage:=");
	gets(a);
	
	n=strlen(a);
	
	strcpy(b,a);
	
	strrev(a);
	
	count=strcmp(b,a);
	
	if(count==0)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	
}