#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[50];
 int ch;
 clrscr();
 printf("enter a string");
 gets(a);
 printf("Enter choice as 1:lower\n 2:upper");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
	strlwr(a);
	break;
  case 2:
	strupr(a);
	break;
  default:
	printf("error choice");
 }
 puts(a);
 getch();
}