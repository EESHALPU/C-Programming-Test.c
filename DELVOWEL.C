/*Write a 'C' program to accept a string from user,delete all vowels
from that string and display the result(30 marks)*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i;
char s[30];
clrscr();
printf("\n Enter the string");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||
s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
{
s[i]=' ';
 }
 }
 printf("\nAfter deleting the vowel from given string is::%s",s);
 getch();
 }
 /*OUTPUT*/
 Enter the string aeioussstttrrrpppgh

 After deleting the vowel from given string is::     ssstttrrrpppgh
