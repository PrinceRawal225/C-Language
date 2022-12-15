//count frequency of each character in a string

#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i,j,count=0,n=0;
	
	printf("Enter the massage:=");
	gets(a);
	
	n=strlen(a);
	
	printf("string lenth::=%d\n",n);
	
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				a[j]='\0';
			}
		}
		
		if(a[i]!='\0')
		{
			printf("%c=%d\n",a[i],count);
		}
	}
	
	
	
	
}