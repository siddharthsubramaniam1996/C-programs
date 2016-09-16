#include<stdio.h>
#include<conio.h>
void main()

{
int n,m,i,j,array[50];
clrscr();

printf("enter the charachter you would like to get printed : ");
scanf("%s",&array);

printf("enter the number of rows the charachter should occupy: ");
scanf("%d",&n);

printf("enter the number of columns the charachter should occupy: ");
scanf("%d",&m);




	for(i=0;i<n;i++)
	{ printf("\n");
		for(j=0;j<m;j++)
		{
		printf("%s",array);
		printf("\t");

		}


	}
getch();
}