#include<stdio.h>
void main()
{
double area;
double r;
double pi=3.14;
clrscr();
printf("Enter the radius in cm: \n");
scanf("%lf",&r);
area=pi*r*r;
printf("The area is: %lf cm^2",area);
}