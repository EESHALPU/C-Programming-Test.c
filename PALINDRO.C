#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[50],b[50];
 int l=0,i;
 clrscr();
 printf("Enter a string");
 gets(a);
 strcpy(b,a);
 strrev(a);
 for(i=0;a[i]!='\0';i++)
 {
  if(a[i]==b[i])
  l++;
 }
 if(l==i)
 printf("It is a palindrome");
 else
 printf("It is not a palindrome");
 getch();
}