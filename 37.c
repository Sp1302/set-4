# set-4
#include<stdio.h>
int main()
{
int a,b,c;
printf("\nenter two numbers");
scanf("%d%d\n",&a,&b);
c=a;
a=b;
b=c;
printf("%d\t%d\n",a,b);
return 0;
}
