#include<stdio.h>
#include<conio.h>
void main()

{

int i,n,arr[50],x=1;
clrscr();



printf("enter the limit to which the numbers should be printed \nfrom 1 onwards : ");
scanf("%d",&n);

for(i=0;i<n;i++)

{

	printf("%d\n",x++);

}
getch();

}
