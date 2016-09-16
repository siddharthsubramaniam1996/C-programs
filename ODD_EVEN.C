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
		printf("sid is stupid");
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