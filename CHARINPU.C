#include<stdio.h>
#include<conio.h>
void main()

{
int n,i,array[20];
clrscr();

printf("enter the charachter you would like to get printed : ");
scanf("%s",&array);

printf("how many times would you like the phrase to be printed?\t");
scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("%s\n",array);
	}
getch();

}
