/*Write a 'c' program to check given string is palindrome or not(20 marks)*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j,count=0,flag=0;
char s1[30];
clrscr();
printf("\n Enter the string");
scanf("%s",s1);
for(i=0;s1[i]!='\0';i++)
{
count++;
}
for(i=0,j=count-1;i<j;i++,j--)
{
if(s1[i]!=s1[j])
{
flag=1;
break;
}
}
if(flag==0)
printf("\n The given String is palindrome");
else
printf("\n The given String is not palindrome");
getch();
}

/*OUTPUT*/
Enter the stringSTR
The given String is not palindrome
Enter the stringMAM
The given String is palindrome
