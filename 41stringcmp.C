#include<stdio.h>
void main()
{
int x,y;
char a[10],b[10];
printf("\n enter the two strings:");
scanf("%s%s",&a,&b);
x=strlen(a);
y=strlen(b);
if(x>=y)
{
printf("\n%s",a);
}
else
{
printf("\n%s",b);
}
}
