#include<stdio.h>
#include<conio.h>
void main()
{
 char a[100],i,n=0;
 clrscr();
 printf("Enter a string");
 gets(a);
 for(i=0;a[i]!='\0';i++)
 n++;
 printf("%d",n);
 getch();
}