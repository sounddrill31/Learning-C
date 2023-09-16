#include <stdio.h>
void main()
{
	int x,y,z;
	clrscr();
	printf("Enter first and second numbers to be swapped\n");
	scanf("%d %d",&x,&y);
	printf("Entered numbers are:\n%d  %d",x,y);
	z=x;
	x=y;
	y=z;

	printf("\nThe first number is now:\n %d",x);
	printf("\nThe second number is now:\n %d",y);
	z=x;
	}
