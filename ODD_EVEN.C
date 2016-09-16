#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();

	printf("enter your number :  ");
	scanf("%d",&a);

	if(a==0)
	{
		printf("number is neither odd nor even");
	}
	else
	{
		if(a%2==0)
		{
			printf("number is even");
		}
		else
		{
		printf("number is odd");
		}
	}
getch();

}