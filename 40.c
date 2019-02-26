# set-4
#include<stdio.h>
#include<conio.h>
int main()
{
int n,a,b,c,i;
printf("\nenter the element");
scanf("%d\n",&n);
a=0;
b=1;
printf("%d%d\n",a,b);
for(i=1;i<=n;i++)
{
c=a+b;
a=b;
b=c;
printf("%d\n",c);
}
return 0;
}
