#include <stdio.h>
int main(){
double a,b,result;
char op;
clrscr();
printf("Enter Operation to be performed(+ - * /): ");
scanf("%s",&op);
printf("Enter A: ");
scanf("%lf",&a);
printf("Enter B: ");
scanf("%lf",&b);
if(op=='+')
{
	result=a+b;
	printf("\nSum = %lf", result);
}
else if(op=='-')
{
	result=a-b;
	printf("\nDifference = %lf", result);
}
else if(op=='*')
{
	result=a*b;
	printf("\nMultiplication = %lf", result);
}
else if(op=='/')
{
	result=a/b;
	printf("\nDivision = %lf", result);
}
else
{
	printf("invalid operation");
	}
return 0;
}