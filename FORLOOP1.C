#include <stdio.h>
void main()
{
	int x,y; //print a line x-1 times
	char name[10];
	clrscr();
	printf("Enter number\n");
	scanf("%d",&x);
	printf("Now Enter custom text to be repeated %d times",x-1);
	scanf("%s",&name);
	clrscr();
       //	x=5;
	for(y=x;y!=0;y--)
	{
	printf("%s\n",name);
	}
}