#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
 char a;
 clrscr();
 printf("enter a char");
 scanf("%c",&a);
 if(isalpha(a))
 printf("it is alphabet");
 else
 printf("it is digit");
 getch();
}