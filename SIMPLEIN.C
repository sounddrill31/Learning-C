#include <stdio.h>
void main()
{
	double p,r,t;
	double s;
	clrscr();
	printf("We'll caclulate the simple interest with entered Principal, Rate and Time\n");
	printf("Enter your Principal Amount:\n");
	scanf("%lf",&p);
	printf("Enter your Interest Rate in percentage:\n");
	scanf("%lf",&r);
	printf("Enter your Interest Duration in time:\n");
	scanf("%lf",&t);
	s=p*r*t;
	s=s/100;
	printf("The Simple Interest is:  %lf",s);
}
