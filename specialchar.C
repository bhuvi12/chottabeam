#include<stdio.h>
#include<conio.h>
void main()
{
int i,a;
char name[100];
printf("\n enter the string");
scanf("%s",&name);
for(i=0;name[i]!='\0';i++)
{
if(name[i]>='0'&&name[i]<='9')
{
a++;
}
printf("\n special character is ",a);
getch();
}
