#include<stdio.h>
#include<conio.h>
void main()
{
int n,a=0,b=1,t;
printf("\n enter the limit");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
t=a+b;
a=b;
b=t;
printf("\n fibonacci seriesis:",b);
}
getch();
}
