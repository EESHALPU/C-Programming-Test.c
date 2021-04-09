/*Write a 'C' program to accept string from user and convert
all lower case letters into upper case letters and vice versa*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i;
char s1[20];
clrscr();
printf("\n Enter the string");
scanf("%s",s1);
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]>=65 && s1[i]<=90)
{
s1[i]=s1[i]+32;
}
else if(s1[i]>=97 && s1[i]<=122)
{
s1[i]=s1[i]-32;
}
}
printf("converted string is::%s",s1);
getch();
}
/*OUTPUT*/
 Enter the string KOTHRUD
 converted string is::kothrud
  Enter the string pune
  converted string is::PUNE