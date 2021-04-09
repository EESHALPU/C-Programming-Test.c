/*Write a 'C' program to accept a string from user and generate following pattern(e.g.input is
string"abcd")(20 marks)
a
a b
a b c
a b c d
a b c
a b
a     */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j,len;
char s1[30];
clrscr();
printf("\n Enter the string");
scanf("%s",s1);
len=strlen(s1);
printf("\nthe length of given string is::%d",len);
printf("\n");
for(i=0;i<=len;i++)
{
j=i+1;
printf("%-12.*s\n",j,s1);
}
for(i=len;i>0;i--)
{
j=i-1;
printf("%-12.*s\n",j,s1);
}
getch();
}