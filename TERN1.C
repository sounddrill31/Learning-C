#include <stdio.h>
int main()
{
	int x,y;
	int maxnum;
	clrscr();
	printf("We are going to find the bigger of two numbers!\nEnter the first number:\n");
	scanf("%d",&x);
	printf("Now enter the second number.\n");
	scanf("%d",&y);
	maxnum=x>y?x:y;
	printf("The bigger of the two entered numbers is: %d",maxnum);
	return 0;
}