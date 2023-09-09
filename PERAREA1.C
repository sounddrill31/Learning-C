#include <stdio.h>
void main()
{
	int x,y,op,z;
	clrscr();
	printf("Enter the operation to be performed: 1 for Perimeterm, 2 for Area and 5 to exit.\n(1,2,5)");
	scanf("%d",&op);
	printf("Entered Operation is: %d",op);
	if (op==1)
	{
	printf("Enter your first number:\n");
	scanf("%d",&x);
	printf("Enter your second number:\n");
	scanf("%d",&y);
	z=x+y;
	z=z*2;
	printf("The perimeter is:\n%d",z);
	}
	else if(op==2)
	{
	printf("Enter your first number:\n");
	scanf("%d",&x);
	printf("Enter your second number:\n");
	scanf("%d",&y);
	z=x*y;
	printf("The area is:\n%d",z);
	}
	else if(op==5)
	{
	printf("Exited!");
	}
	else
	{
	printf("Unspecified Errors!");
	}
}