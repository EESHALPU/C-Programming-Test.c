#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y,i,f=1;
 clrscr();
 printf("enter the values of x & y");
 scanf("%d%d",&x,&y);
 for(i=1;i<=y;i++)
 {
  f=f*x;
 }
 printf("%d",f);
 getch();
}