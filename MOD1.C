#include <stdio.h>
void main(){
	int x,y,z;
	clrscr();
	printf("Enter two numbers. We will check if the first number is divisible by the next:\n Enter the first number:\n");
	scanf("%d",&x);
	printf("Enter the second number:\n");
	scanf("%d",&y);
	printf("\nThe Entered numbers are: %d and %d",x,y);
	z=x%y;
	if(z==0)
	{
	printf("\n%d is divisible by %d!",x,y);
	}
	else if (z!=0)
	{
	printf("\n%d is not divisible by %d!",x,y);
	}
	else {
	printf("\nUndefinied Error!");
	}
}