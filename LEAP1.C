#include <stdio.h>
int main()
{
	int year;
	clrscr();
	printf("Enter the year, we will check if this is a leap year!\n");
	scanf("%d",&year);
	printf("Entered number is: %d",year);
	if ((year & 3) == 0 && ((year % 25) != 0 || (year & 15) == 0)) // credit to https://stackoverflow.com/a/11595914 for the if statement
	{
		printf("\n%d is a leap year!",year);
	}
	else
	{
		printf("\n%d is not a leap year!",year
		);
	}
	return 0;
}