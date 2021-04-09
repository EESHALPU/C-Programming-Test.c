#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("enter three number");
 scanf("%d%d%d",&a,&b,&c);
 if(a>c)
 {
  if(a>b)
  printf("%d",a);
  else
  printf("%d",b);
 }
  else
  {
   if(c>b)
   printf("%d",c);
   else
   printf("%d",b);
  }
  getch();
 }