#include<stdio.h>
main()
{
	char a[100];
	int i,count=0;
	
	printf("Enter your massage:=");
	gets(a);
	
	puts(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		count++;
	}
	
	printf("string lenth:=%d\n",count);
	
	for(i=count-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
}