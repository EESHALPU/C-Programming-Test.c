#include<stdio.h>
#include<conio.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
void main()
{
 int a,b,c,d,e;
 clrscr();
 printf("Enter five numbers");
 scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
 printf("the maximum number is=%d\n the minimum number is=%d",max(a,max(b,max(c,max(d,e)))),min(a,min(b,min(c,min(d,e)))));
 getch();
}