#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i,n,count=0,b=0;
	
	printf("enter your massage:=");
	gets(a);
	
	n=strlen(a);
	
	for(i=0;i<n;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			count++;
		}
		else if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
			count++;
		}
		else
		{
			b++;	
		}
	}
	
	printf("vowels in string:%d\n",count);
	printf("consonat in string:%d",b);
}