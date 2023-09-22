//relational operators
# include <stdio.h>
void main()
{
//+=
//-=
//*=
// /=
// %=
int a,b,c;
clrscr();
printf("Enter A and B\n");
scanf("%d  %d",&a,&b);
c=a;
a=c;
a+=b;
printf("A+=B is %d\n",a);
a=c;
a-=b;
printf("A-=B is %d\n",a);
a=c;
a*=b;
printf("A*=B is %d\n",a);
a=c;
a/=b;
printf("A/=B is %d\n",a);
a=c;
a%=b;
printf("Amod=B is %d\n",a);
}