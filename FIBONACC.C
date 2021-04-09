#include<stdio.h>
#include<conio.h>
void main()
{
 int n,a=0,b=1,c,i;
 clrscr();
 printf("enter the range");
 scanf("%d",&n);
 printf("%d ",b);
 for(i=0;i<n;i++)
 {
  c=a+b;
  a=b;
  b=c;
 printf("%d ",c);
 }
 getch();
}