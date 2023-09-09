#include <stdio.h>
void main()
{
	//we will find the square or cube of a number
	int x,y,op;
	clrscr();
	printf("Which operation do you want to perform? Select 1 for Square, 2 for Cube, (1,2,5). Enter 5 to exit!\nEnter selection:\n");
	scanf("%d",&op);
	printf("Now enter the number!\n");
	scanf("%d",&x);
	if(op==1)
	{
	y=x*x;
	printf("\nThe square of %d is %d!",x,y);
	}
	else if (op==2)
	{
	y=x*x*x;
	printf("\nThe Cube of %d is %d!",x,y);
	}
	else if (op==5)
	{
	printf("\nAborted!");
	}
	else
	{
	printf("\nUnknown Error!");
	}
}

