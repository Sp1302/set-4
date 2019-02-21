# set-4
#include<stdio.h>
#include<conio.h>
int main()
{
char str[50],i,c=0;
printf("\nenter the word");
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
c++;
}
}
printf("%d",c);
return 0;
}
