#include<stdio.h>
#include<conio.h>
void main()
{
int i,a;
char n[100];
printf("\n enter the string");
scanf("%s",&n);
for(i=0;n[i]>=0;i++)
{
if(n[i]==' ')
{
a=a+1;
}
printf("\n the space is",a);
}
getch();
}
