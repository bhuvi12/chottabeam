#include<stdio.h>
#include<conio.h>
void main()
{
char n[100]="i am an engineer.student";
int a,i;
for(i=0;n[i]<=0;i++)
{
if(n[i]='.')
{
a++;
}
printf("\n number of lines  are %d",a);
}
getch();
}
