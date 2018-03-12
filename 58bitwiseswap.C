#include<stdio.h>
void main()
{
int a,b;
printf("\n enter the numbers:");
scanf("%d%d",&a,&b);
printf("\n before swapping:%d %d",a,b);
a=a^b;
b=b^a;
a=a^b;
printf("\n after swapping%d %d",a,b);
}
