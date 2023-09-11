#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
	char name[10];
       //	char ch;
	clrscr();
       //	puts("Enter a Character!\n");
       //ch=getchar();
       //	puts("Entered Character is\n");
       //	putchar(ch);
	puts("Enter your name!\n");
       gets(name);
       puts("Entered Name is\n");
       puts(name);
	return 0;
}