#include<stdio.h>
#include<conio.h>
void main()
{
 int a;
 clrscr();
 printf("Enter a number");
 scanf("%d",&a);
 if((a%100==0&&a%400==0)||(a%100!=0&&a%4==0))
 printf("this is a leap year");
 else
 printf("this is not a leap year");
 getch();
}


