#include <stdio.h>
void main()
{
	int x;
	int y;
	int z;
	clrscr();
	printf("Enter the first number to be swapped: \n");
	scanf("%d",&x);
	printf("Enter the second number to be swapped: \n");
	scanf("%d",&y);
	printf("The Numbers were: %d and %d \n",x,y);
	z=x;
	x=y;
	y=z;
   //	printf("The Numbers were: %d and %d ",x,y);
	printf("The Numbers are: %d and %d \n",x,y);

   }