#include <stdio.h>
void main()
{
char name[10];
int num,count,sum=0;
clrscr();
printf("Enter your name:");
scanf("%s",&name);
printf("\nName entered is: %s",name);
printf("\nHow many times do you want it to be repeated?");
scanf("%d",&num);
printf("\nThis will be repeated %d times!",num);
for(count=1;count<=num;++count)
{
 sum+=count;
 printf("\nName entered is: %s",name);
}
}