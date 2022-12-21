#include<stdio.h>
void add(int a,int b);
void sub(int a,int b);
void multi(int a,int b);
void divide(int a,int b);
main()
{
	char ans;
	int a,no,b;
	
		printf("\npress '1' for addition.\n");
		printf("press '2' for substraction.\n");
		printf("press '3' for multiplication.\n");
		printf("press '4' for division.\n");
	
	do
	{
	
		printf("\n\npress 'N or n'for close.\n");
		printf("press 'y or y'for using calculator.\n");
		
		printf("\nenter your opinion:");
		scanf(" %c",&ans);
		
	

	
		if(ans=='n' || ans=='N')
		{
			printf("\n*******thank you for using calculator*********\n");
		}
		else if(ans=='y' || ans=='Y')
		{
	
		
		printf("\nenter the number for calculator:");
		scanf("%d",&no);	
	
	
		printf("\nenter the value of a&b:");
		scanf("%d%d",&a,&b);
		
		
		
			switch(no)
			{
				case 1:
					add(a,b);
					break;
				case 2:
					sub(a,b);
					break;
				case 3:
					multi(a,b);
					break;
				case 4:
					divide(a,b);
					break;
			}
		}

	}
	while(ans=='Y' || ans=='y');
}

void add(int a,int b)
{
	
	printf("addition is:%d\n",a+b);
}

void sub(int a,int b)
{

	printf("substraction is:%d\n",a-b);
}

void multi(int a,int b)
{
	
	printf("multiplication is:%d\n",a*b);
}

void divide(int a,int b)
{
	
	printf("division is:%d\n",a/b);
}

