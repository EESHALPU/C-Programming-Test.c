/* Write a 'C' program to calculate of a given string without using standard function(20 marks)*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,count=0;
char s1[20];
clrscr();
printf("\n Enter the string");
scanf("%s",s1);
printf("\n The given string  is::=%s",s1);
for(i=0;s1[i]!='\0';i++)
{
count++;
}
printf("\nThe length of given string is::%d",count);
getch();
}
/*OUTPUT*/
 Enter the stringpune

  The given string  is::=pune
  The length of given string is::4