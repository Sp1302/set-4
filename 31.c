# set-4
#include<stdio.h>
#include<conio.h>
int main()
{
char str[50],i,c=0;
printf("\nenter a character");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>'a' &&str[i]<'z')
{
c++;
}
}
printf("%d\n",c);
return 0;
}
