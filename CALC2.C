#include <stdio.h>
void main()
{
	int a,b,result;
	int op;
	clrscr();
	printf("What operation would you like to do?\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\nEnter your Choice (1,2,3,4) or type 5 to exit.\n");
	scanf("%d",&op);
	printf("Very good! Now enter the first number.\n");
	scanf("%d",&a);
	printf("Now enter the second value.\n");
	scanf("%d",&b);
	printf("The numbers entered are: %d and %d\n",a,b);
	if(op==1)
	{
	result=a+b;
	printf("The result is: %d",result);
	}
	if(op==2)
	{
	result=a-b;
	printf("The result is: %d",result);
	}
	if(op==3)
	{
	result=a*b;
	printf("The result is: %d",result);
	}
	if(op==4)
	{
	result=a/b;
	printf("The result is: %d", result);
	}
	if(op==5)
	{
	printf("\nExited.");
	}

}